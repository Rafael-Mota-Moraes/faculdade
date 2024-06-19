# Junções

- Uma tabela juntada é uma derivada de outras duas tabelas.
- Estão disponíveis as junções internas, externas e cruzadas.

## Junção cruzada (cross join)

- Retorna M \* N linhas (select \* from t1, t2;)
- select \* from t1 cross join t2;

# União vs Intersecção

## Inner join

- select \* from t1 innet join t2 on t1.num = t2.num;
- select \* from t1 inner join t2 using num;

## Left outer join

### as linhas da esquerda que não possuem correspondente na direita coloca null no lugar

- select \* from t1 left join t2 on t1.num = t2.num;
- select \* from t1 left join t2 using (num);

## Right outer join

### as linhas da esquerda que não possuem correspondente na direita coloca null no lugar

- select \* from t1 right join t2 on t1.num = t2.num;
- select \* from t1 right join t2 using (num);

## Full outer join

## Mostra todas as linhas da esquerda e direita e coloca null nos que não forem satisfeitos

select \* from t1 full join t2 on t1.num = t2.num;

## Full join

# Trigger

- Executado sempre que um evento associado ocorrer.
