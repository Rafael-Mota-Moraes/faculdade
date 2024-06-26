# ➜ pgcli -h localhost  db-estudos postgres


-- 1) Altera nome da tabela movimento para movimentacao;
ALTER TABLE movimento RENAME TO movimentacao;

-- 2) Liste todos os clientes que contenham Pedro e Silveira no nome.
SELECT * FROM cliente WHERE nome_cli ILIKE '%Pedro%' AND nome_cli ILIKE '%Silveira%';

-- 3)  Liste o nome do cliente que possui o maior limite.
SELECT nome_cli, limite_con FROM cliente, conta WHERE cliente.codigo_cli = conta.codigo_cli AND conta.limite_con = (SELECT MAX(limite_con) FROM conta);

-- 4) Mostre o nome do cliente e todos os dados da tabela movimentação efetuadas entre os dias '20210715' e '20210720'
SELECT cliente.nome_cli, movimentacao.*
FROM cliente, movimentacao, conta
WHERE movimentacao.codigo_con = conta.codigo_con
AND conta.codigo_cli = cliente.codigo_cli
AND movimentacao.data_mov BETWEEN '2024-01-15' AND '2024-01-20';

-- 5) Mostre o nome do cliente, o código da conta e o total de débito e crédito de cada conta.

SELECT cliente.nome_cli, conta.codigo_con,
	SUM(CASE WHEN movimentacao.debcre_mov = 'c' THEN valor_mov ELSE 0 END) AS total_credito,
	SUM(CASE WHEN movimentacao.debcre_mov = 'd' THEN valor_mov ELSE 0 END) AS total_debito
FROM cliente, conta, movimentacao
WHERE conta.codigo_cli = cliente.codigo_cli AND movimentacao.codigo_con = conta.codigo_con
GROUP BY cliente.nome_cli, conta.codigo_con;

-- 6) Crie uma coluna chamada saldo tipo NUMERIC(8,2) na tabela conta.
ALTER TABLE conta ADD saldo NUMERIC(8, 2);

-- 7) Atualize a coluna criada acima de acordo com a movimentação de cada conta.
UPDATE conta
	SET saldo = (
		SELECT SUM(valor_mov * CASE WHEN debcre_mov = 'c' THEN 1 ELSE -1 END)
		FROM movimentacao
		WHERE movimentacao.codigo_con = conta.codigo_con
	);

-- 8) Mostre o nome do cliente, número da conta, limite e o saldo.
SELECT cliente.nome_cli, conta.codigo_con, conta.limite_con, conta.saldo
FROM cliente, conta, movimentacao
WHERE movimentacao.codigo_con = conta.codigo_con AND conta.codigo_cli = cliente.codigo_cli
GROUP BY cliente.nome_cli, conta.codigo_con;

-- 9) Mostre o nome do cliente, número da conta e todos os dados da movimentação de cada conta.
SELECT cliente.nome_cli, conta.codigo_con, movimentacao.*
FROM cliente, conta, movimentacao
WHERE movimentacao.codigo_con = conta.codigo_con AND conta.codigo_cli = cliente.codigo_cli;4

-- 10) Mostre o nome do cliente e a quantidade de lançamentos a débito e crédito efetuados em sua conta.
SELECT
	cliente.nome_cli,
	COUNT(CASE WHEN movimentacao.debcre_mov = 'd' THEN 1 ELSE NULL END) AS debitos,
	COUNT(CASE WHEN movimentacao.debcre_mov = 'c' THEN 1 ELSE NULL END) AS creditos
FROM conta, movimentacao, cliente
WHERE conta.codigo_con = movimentacao.codigo_con AND conta.codigo_cli = cliente.codigo_Cli
GROUP BY cliente.nome_cli;
