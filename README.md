# TRABALHO 1 Métodos de Programação

## Trabalho 1 da disciplina Métodos de programação (UnB 2021/1)

Este é o repositório com que registra o controle de versão dos difereentes testes de implementação do primeiro trabalho prático da disciplina de Métodos de programação.

É possível acessar a documentação da tarefa clicando no link abaixo:
https://github.com/rafaelmdalmoro/MP_T1/blob/main/Especificacao.pdf - automatic!
[Especificação do Trabalho](https://github.com/rafaelmdalmoro/MP_T1/blob/main/Especificacao.pdf).

## Como executar o trabalho
1. Baixe o repositório em sua máquina
2. Com o g++ e o make instalado, digite "make" neste diretório
3. Execute o arquivo gerado com "./testa_velha"

## Histórico de Testes
Como requisito do trabalho, os testes da metodologia TDD foram registrados em arquivo de texto e documentados também na descrição do repositório(link abaixo).

https://github.com/rafaelmdalmoro/MP_T1/blob/main/historicoTestes.txt - automatic!
[Histórico de Testes](https://github.com/rafaelmdalmoro/MP_T1/blob/main/historicoTestes.txt).

### Teste 1 - Código inicial
* Testa a matriz implementada pelo professor
* Teste FALHOU!
* _Obs_: nada foi implementado

### Teste 2 - X vence
* Testa se X vence na matriz 1,
* Teste Passou!
* _Obs_: implementadas funcoes vencedorX, linha<n>Venceu, coluna<n>Venceu e diagonal<n>Venceu

### Teste 3 - X vence todas
* Testa todos os casos em que o X vence, retornando sempre 1
* Teste Passou!
* _Obs_: implementadas matrizes vitoriaX_<n>[3][3]

### Teste 4 - O vence
* Testa caso em que o O vence, retornando sempre 2
* Teste Falhou!
* Justificativa: ainda não foi implementada a vitoria do O
* _Obs_: Todos os testes de Xvenceu comentados

### Teste 5 - O vence
* Testa caso em que o O vence, retornando sempre 2
* Teste Passou!
* Justificativa: foi implementada a vitoria do O
* _Obs_: Todos os testes de Xvenceu comentados

### Teste 6 - O vence todos
* Testa todos os casos em que o O vence, retornando sempre 2
* Teste Passou!
* Justificativa: implementadas matrizes vitoriaO_<n>[3][3]
* _Obs_: Todos os testes de Xvenceu comentados

### Teste 7 - X vence todos e O vence todos
* Testa todos os casos em que o O vence, retornando 2, e todos os casos em que X vence, retornando 1
* Teste Passou!
* _Obs_: Todos os testes de Xvenceu "descomentados"

### Teste 8 - Somente X
* Jogo impossivel
* Teste Falhou!
* Justificativa: As regras de jogo valida nao estao completas
* _Obs_: implementa matriz TudoX

### Teste 9 - Somente X
* Jogo impossivel
* Teste Passou!
* Justificativa: As regras de jogo valido estao completas
* _Obs_: implementa jogoValido

### Teste 10 - Varios jogos impossiveis
* Jogo impossivel, como só X ou só O ou 6 'x' para 3 'O'
* Teste Passou!
* Justificativa: As regras de jogo valido estao completas
* _Obs_: implementa matrizes de jogos impossiveis

### Teste 11 - Jogo indefinido
* Testa se jogo indefinido (sem vencedor) resulta em -1
* Teste Falhou
* Justificativa: As regras de jogo indefinido nao estao completas
* _Obs_: implementa matriz de jogo indefinido1

### Teste 12 - Jogo completo?
* Testa se jogo está completamente preenchido, senão resulta em -1
* Teste falhou!
* Justificativa: As regras de jogo indefinido (simples) nao estao completas. é possivel ganhar antes de preencher todas os quadrados
* _Obs_: implementa matriz de jogo indefinido1

### Teste 13 - Jogo incompleto ganho
* Testa se jogo está completamente preenchido, senão testa se alguem ganhou, caso contrario resulta em -1
* Teste Passou!
* Justificativa: As regras de jogo indefinido (simples) estao completas. É possivel ganhar antes de preencher todas os quadrados
* _Obs_: ajuste de condicionais no verifica_velha

### Teste 14 -  Jogo impossível
* Testa um jogo em que os 2 jogadores sao vencedores
* Teste falhou!
* Justificativa: As regras de jogo impossivel nao estao completas. é impossivel ter 2 vencedores
* _Obs_: implementa matriz de jogo impossivel3

### Teste 15 -  Jogo impossível
* Testa um jogo em que os 2 jogadores sao vencedores
* Teste passou!
* Justificativa: As regras de jogo impossivel estao completas. é impossivel ter 2 vencedores
* _Obs_: ajusta condicionais jogoValido

### Teste 16 - Empate
* Testa um jogo completo, porem empatado
* Teste falhou!
* Justificativa: As regras de jogo empatado nao estao completas. 
* _Obs_: implementa matriz empate1

### Teste 17 - Empate
* Testa um jogo completo, porem empatado
* Teste passou
* Justificativa: As regras de jogo empatado estao completas. 
* _Obs_: ajusta condicionais do VerificaVelha
