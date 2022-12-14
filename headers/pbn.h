#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função que gera os arranjos de acordo com as cores e o tamanho
// e realiza a análise de possíveis soluções para o PBN
// Crédito:
// Marcos Paulo Ferreira (Daemonio)
// https://daemoniolabs.wordpress.com
// OBS.: detalhes do funcionamento do código 
// podem ser encontrados na documnetação
int valida_pbn(int size, int matriz[size][size]);