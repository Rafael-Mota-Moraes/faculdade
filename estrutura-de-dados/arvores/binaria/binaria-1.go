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
	mostrarArvore(arvore)
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

func maximoDeNosNoNivel(nivel int) int {
	return 1 << uint(nivel) // 2^nivel
}

func mostrarEspacos(count int) {
	for i := 0; i < count; i++ {
		fmt.Print(" ")
	}
}

func mostrarArvore(raiz *No) {
	if raiz == nil {
		return
	}

	h := altura(raiz)
	larguraMaxima := maximoDeNosNoNivel(h-1) * 3 // Largura máxima da última linha

	// Fila para travessia em nível
	fila := []*No{raiz}
	proximo := 0
	anterior := 1

	for nivel := 0; nivel < h; nivel++ {
		nosNoNivel := maximoDeNosNoNivel(nivel)
		espacosEntre := (larguraMaxima / nosNoNivel) - 1
		espacosPrincipais := espacosEntre / 2

		mostrarEspacos(espacosPrincipais)

		proximoAnterior := anterior + nosNoNivel*2
		for i := proximo; i < anterior; i++ {
			no := fila[i]
			if no != nil {
				fmt.Printf("%2d", no.chave)
				fila = append(fila, no.esq, no.dir)
			} else {
				fmt.Print("  ")
				fila = append(fila, nil, nil)
			}
			if i < proximoAnterior-1 {
				mostrarEspacos(espacosEntre)
			}
		}
		fmt.Println()
		proximo = anterior
		anterior = proximoAnterior
	}
}
