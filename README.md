# strings_e_arrays_linguagem_c
Exercícios de manipulação de strings e arrays em C.

## 1 - Agrupar e contar:

Percorro a string caractere por caractere usando um for.  
Começo do índice 1 porque o primeiro caractere já é iniciado antes do loop.  
Se o caractere atual for igual ao anterior, incremento o contador.  
Se for diferente, reseto o contador para 1 e atualizo o caractere atual.  
A cada iteração, verifico se o contador atual é maior que o melhor registrado.  
Se sim, salvo o novo melhor caractere e a nova maior contagem.  
No final, imprimo o caractere mais repetido e quantas vezes ele apareceu consecutivamente.

### Complexidade:

Tempo: Percorro a string uma única vez  
Memória: Uso apenas variáveis fixas, independente do tamanho da string  

### 3 casos de teste:

"aaabbbbbcc" → (b, 5)  
"aaa" → (a, 3)  
"abcde" → (a, 1) — nenhum caractere se repete, retorna o primeiro  

**************************************************************************************************************************

## 2 - Array, target e soma:

Uso dois for aninhados para testar todas as combinações possíveis de dois números do array.  
O loop externo pega um número e o interno começa no índice seguinte, evitando repetir pares.  
Dentro dos loops, somo nums[i] + nums[j] e verifico se é igual ao target. Se sim, imprimo os índices i e j.  

### Complexidade:

Tempo: O(n²)  para cada elemento, percorro todos os seguintes  
Memória: O(1) uso apenas variáveis fixas  

### 3 casos de teste:

{12, 18, 31, 48}, target 30 = (0, 1) -> 12 + 18 = 30  
{12, 18, 31, 48}, target 79 = (2, 3) -> 31 + 48 = 79  
{12, 18, 31, 48}, target 43 = (0, 3) -> 12 + 31 = 43  


## 3 - Ordenação por sobrenome:

Uso o algoritmo Bubble Sort com dois for aninhados.  
Para cada par de vizinhos, extraio o sobrenome de cada um usando strrchr, que encontra o último espaço da string, e copio 
para variáveis temporárias.  
Comparo os sobrenomes com strcmp: se o primeiro vem depois do segundo alfabeticamente, troco os dois nomes de lugar usando 
um array temporário temp.  
Repito até o array estar ordenado. No final, percorro o array com um for simples e imprimo cada nome.  

### Complexidade:

Tempo: O(n²) dois loops aninhados, típico do Bubble Sort  
Memória: O(1) apenas variáveis auxiliares fixas  

**************************************************************************************************************************

### 3 casos de teste:

Caso 1 — Dois nomes fora de ordem  
Entrada:  {"Maria Cristina Americo", "Joao Afonso Carvalho"}  
Saída:    {"Maria Cristina Americo", "Joao Afonso Carvalho"}  
Motivo:   "Americo" vem antes de "Carvalho",  já está correto, não troca  

Caso 2 — Sobrenomes distantes no alfabeto  
Entrada:  {"Marta da Rocha Vargas", "Miriam Batista Alves da Silva"}  
Saída:    {"Miriam Batista Alves da Silva", "Marta da Rocha Vargas"}  
Motivo:   "Silva" vem antes de "Vargas"  

Caso 3 — Lista completa ordenada  
Entrada:  {"Maria Cristina Americo", "Joao Afonso Carvalho",  
           "Ana Paula Farias", "Miriam Batista Alves da Silva",  
           "Jose de OLiveira Lorenço", "Marta da Rocha Vargas"}  

Saída:    {"Maria Cristina Americo", "Joao Afonso Carvalho",  
           "Ana Paula Farias", "Jose de OLiveira Lorenço",  
           "Miriam Batista Alves da Silva", "Marta da Rocha Vargas"}  

Motivo:   Americo -> Carvalho -> Farias -> Lorenço -> Silva → Vargas
