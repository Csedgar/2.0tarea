#include <stdio.h>
void minusculas(char *s){
    *s += 'a' - 'A';
}

main(){
    char str[] = "A";
    minusculas(str);
    printf("%s",str);
}
