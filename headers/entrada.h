#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para abertura e verificação do arquivo de entrada
int open_file(char *file_name);

// Função para obter o tamanho (espaços/matriz) do arquivo de entrada
int get_size_arvore_natal(char *file_name);

// Função para iniciar a matriz de adjacências com base no arquivo de entrada
void iniciar_matriz_adj(char *file_name, int size, int matriz[size][size]);

// Função para imprimir a matriz de adjacências
void imprime_matriz_adj(int size, int matriz[size][size]);