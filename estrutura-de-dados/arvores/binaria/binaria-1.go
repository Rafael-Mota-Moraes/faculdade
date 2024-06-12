package main

import (
	"fmt"
	"math"
)

type No struct {
	chave int64
	esq   *No
	dir   *No
}

func main() {
	fmt.Println("Teste")
	var arvore *No
	arvore = inserir(arvore, 6)
	arvore = inserir(arvore, 7)
	arvore = inserir(arvore, 5)
	arvore = inserir(arvore, 2)
	arvore = inserir(arvore, 4)
	arvore = inserir(arvore, 8)

	walk(arvore)
	encontrado := buscar(arvore, 5)

	if encontrado != nil {
		fmt.Println("\nEncontrado:", encontrado.chave)
	}

	fmt.Println("Árvore Binária de Busca:")
	printTree(arvore)
}

func walk(arvore *No) {
	if arvore != nil {
		walk(arvore.esq)
		fmt.Printf("%d ", arvore.chave)
		walk(arvore.dir)
	}
}

func inserir(arvore *No, chave int64) *No {
	var novo *No

	if arvore == nil {
		novo = &No{
			chave: chave,
			esq:   nil,
			dir:   nil,
		}

		return novo
	}

	if chave < arvore.chave {
		arvore.esq = inserir(arvore.esq, chave)
	} else {
		arvore.dir = inserir(arvore.dir, chave)

	}

	return arvore
}

func buscar(arvore *No, chave int64) *No {
	if arvore == nil || chave == arvore.chave {
		return arvore
	}

	if chave < arvore.chave {
		return buscar(arvore.esq, chave)
	} else {
		return buscar(arvore.dir, chave)
	}
}

func altura(raiz *No) int {
	if raiz == nil {
		return 0
	}
	leftHeight := altura(raiz.esq)
	rightHeight := altura(raiz.dir)
	return int(math.Max(float64(leftHeight), float64(rightHeight))) + 1
}

func maxNodesAtLevel(level int) int {
	return 1 << uint(level) // 2^level
}

func printSpaces(count int) {
	for i := 0; i < count; i++ {
		fmt.Print(" ")
	}
}

func printTree(root *No) {
	if root == nil {
		return
	}

	h := altura(root)
	maxWidth := maxNodesAtLevel(h-1) * 3 // Largura máxima da última linha

	// Fila para travessia em nível
	queue := []*No{root}
	front := 0
	rear := 1

	for level := 0; level < h; level++ {
		levelNodes := maxNodesAtLevel(level)
		spacesBetween := (maxWidth / levelNodes) - 1
		leadingSpaces := spacesBetween / 2

		printSpaces(leadingSpaces)

		nextRear := rear + levelNodes*2
		for i := front; i < rear; i++ {
			node := queue[i]
			if node != nil {
				fmt.Printf("%2d", node.chave)
				queue = append(queue, node.esq, node.dir)
			} else {
				fmt.Print("  ")
				queue = append(queue, nil, nil)
			}
			if i < nextRear-1 {
				printSpaces(spacesBetween)
			}
		}
		fmt.Println()
		front = rear
		rear = nextRear
	}
}
