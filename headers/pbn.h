#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valida_pbn(int size, int matriz[size][size]) {
    int *num; 
    int n, r, i, j, k;
    int m, o;
    int cont; cont = 0;
    int cont_total; cont_total = 0;
    char in_color[100] = "AV";
    char string[100];

    r = size;
    n = strlen(in_color);
    j = 0;
    string[0] = 0;
    for (i = 0; i < n; i++) {
        if (strchr(string, in_color[i]) == NULL) {
            string[j] = in_color[i];
            j++;
            string[j] = 0;
        }
    }
    strcpy(in_color, string);
    n = strlen(in_color);
    num = (int *) calloc((r + 1), sizeof(int));
    if (num == NULL) {
        perror("calloc");
        return -1;
    }
    while (num[r] == 0) {
        for (i = 0; i < n; i++) {
            for (j = 0, k = r - 1; j < r; j++) {
                string[k] = in_color[num[j]];
                k--;
            }
            string[r] = 0;
            printf("%s\n\n", string);
            cont_total++;
            num[0]++;
        }
        for (i = 0; i < r; i++) {
            if (num[i] == n) {
                num[i] = 0;
                num[i + 1]++;
            }
        }
    }
    printf("Arranjos válidos: %d\n", cont_total - cont);
    printf("Arranjos inválidos: %d\n", cont);
    return 0;
}