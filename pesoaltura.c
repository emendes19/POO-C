#include <stdio.h>

typedef struct{
    int peso; // peso em quilos
    int altura; // altura em centimetros
} PesoAltura;
int main(){
    PesoAltura pessoa;
    pessoa.peso= 65;
    pessoa.altura= 170;
   printf("peso: %i\nAltura: %i\n", pessoa.peso, pessoa.altura);
    return 0;
}