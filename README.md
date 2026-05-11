## Enunciado

O repositório contém a implementação parcial de um Tipo Abstrato de Dados (TAD) **tabela hash** com tratamento de colisão por meio de **lista encadeada** em C, organizado em três arquivos:

- `th.h` — declaração dos tipos e assinaturas das funções
- `th.c` — implementação das funções (todas já implementadas, **exceto `buscar`**)
- `main.c` — programa principal que testa o TAD

```
Tabela Hash (TAM_TABELA = 10)

Indice    Lista encadeada
[0]  -->  NULL
[1]  -->  [21] -> [11] -> NULL
[2]  -->  NULL
[3]  -->  [33] -> [13] -> NULL
[4]  -->  NULL
[5]  -->  [15] -> [5] -> NULL
...
[9]  -->  NULL

Funcao hash: h(chave) = |chave| % tamanho
```

Sua tarefa é implementar a função `buscar` em `th.c` e completar a função `main` em `main.c`.

### Estrutura do TAD

A tabela hash é um vetor de ponteiros para listas encadeadas. Cada posição do vetor (índice) pode conter uma lista de nós, onde cada nó armazena um valor inteiro. A função hash utilizada é `h(chave) = |chave| % tamanho`.

Quando há colisão (dois valores mapeados para o mesmo índice), o novo elemento é inserido no **início** da lista encadeada daquele índice.

### Funções já implementadas

```c
TabelaHash* criar_tabela(int tamanho);       /* aloca e inicializa a tabela */
void inserir(TabelaHash* th, int valor);     /* insere valor na tabela */
void liberar_tabela(TabelaHash* th);         /* libera toda a memoria */
```

### Função buscar() em `th.c`

**`buscar(TabelaHash* th, int valor)`** — Busca pelo valor na tabela hash. Retorna **1** se o elemento existe na tabela, ou **0** caso contrário.

### Entrada

A entrada é composta por:
- Uma linha com um inteiro `N`, o número de elementos a inserir
- Uma linha com `N` inteiros separados por espaço, os valores a inserir
- Uma linha com um inteiro `M`, o número de buscas a realizar
- Uma linha com `M` inteiros separados por espaço, os valores a buscar

### Saída

Para cada busca, uma linha no formato:
- `X: EXISTE` — se o valor X foi encontrado na tabela
- `X: NAO EXISTE` — se o valor X não foi encontrado

### Exemplos de entrada e saída

| Entrada | Saída |
| :--- | :--- |
| 5<br>10 20 30 40 50<br>3<br>20 60 40 | 20: EXISTE<br>60: NAO EXISTE<br>40: EXISTE |
| 6<br>5 15 25 35 45 55<br>4<br>15 25 100 5 | 15: EXISTE<br>25: EXISTE<br>100: NAO EXISTE<br>5: EXISTE |
| 4<br>-10 -20 30 40<br>5<br>-10 -20 0 30 -30 | -10: EXISTE<br>-20: EXISTE<br>0: NAO EXISTE<br>30: EXISTE<br>-30: NAO EXISTE |
