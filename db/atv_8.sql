-- 1) Cliente(s) com o maior valor de crediário (cliente e total).
SELECT cliente.nome, MAX(cr.valor_total) AS total_crediario
FROM cliente
JOIN crediario cr USING(cod_cliente)
WHERE valor_total = (SELECT MAX(valor_total) FROM crediario)
GROUP BY cliente.nome;

-- 2) Nome do(s) cliente(s) que não tem crediário.
SELECT nome
FROM cliente
WHERE cod_cliente NOT IN (SELECT cod_cliente FROM crediario);

-- 3) Todas as prestações pagas do mês de junho/2024 (cliente, data da compra, data parcela, data pagamento, valor parcela).
SELECT cliente.nome, crediario.data_compra, parcelas.data_vecto, parcelas.data_pagto, parcelas.valor_parc 
FROM cliente
JOIN crediario ON crediario.cod_cliente = cliente.cod_cliente
JOIN parcelas ON parcelas.id_crediario = crediario.id_crediario
WHERE EXTRACT(MONTH FROM parcelas.data_pagto) = 7 AND parcelas.data_pagto IS NOT NULL;

-- 4) Todas as prestações vencidas e não pagas do mês de junho/2024 (cliente, data da compra, data parcela, data pagamento, valor parcela).
SELECT cliente.nome, crediario.data_compra, parcelas.data_vecto, parcelas.data_pagto, parcelas.valor_parc
FROM crediario
JOIN parcelas ON parcelas.id_crediario = crediario.id_crediario 
JOIN cliente ON cliente.cod_cliente = crediario.cod_cliente
WHERE TO_CHAR(parcelas.data_vecto, 'MM') = '06' AND parcelas.data_pagto IS NULL;

-- 5) Todas as prestações a vencer (cliente, data da compra, data parcela, data pagamento, valor parcela).
SELECT cliente.nome, crediario.data_compra, parcelas.data_vecto, parcelas.data_pagto, parcelas.valor_parc
FROM crediario
JOIN parcelas USING(id_crediario)
JOIN cliente USING(cod_cliente)
WHERE parcelas.data_vecto >= CURRENT_DATE AND parcelas.data_pagto IS NULL;

-- 6) Todas as prestações pagas em atraso (cliente, data da compra, data da parcela, data pagamento, valor da parcela, valor do pagamento, valor do juros).
