#include <stdio.h>

void invierte(char*, int, int);
int main()
{
    char cadena[] = "computacion";
    invierte(cadena,0,10);
    printf("%s\n", cadena);

    return 0;
}
void invierte(char *str,int ini, int fin){
    if (fin > 0){
        char temp = *str;
        *str = *(str + fin - ini);
        *(str + fin - ini) = temp;
        invierte(str + 1, ini, fin-2);
    }
}
