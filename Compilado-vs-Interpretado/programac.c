//COMPILADO

#include <stdio.h>

int main() {
    int a = 7;
    int b = 2;
    int c = a + b + 10;
// Declação de variaveis 
    if(c!=0){
        c++;
    }
// Codicional de C para incrementar +1
    for (int i = 0; i < 10000000; i++) {
          c++;   
     }
// Icrementar 10000000x em c
    printf("Olá mundo, c = %d\n", c*2 + 1);
    return 0;
    // O que será exibido, o resultado de c*2 + 1
}



