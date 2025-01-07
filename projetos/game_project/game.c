#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct calcula{
    int dificuldade;
    int valor1;
    int valor2;
    int operacao;
    int resultado;
}CALC;

void play();
void show_info(CALC calc);

int pontos = 0;

int main(){

    //may be declared only one time
    srand(time(NULL));
    play();
    return 0;
}

void play(){
    //TBD
}

void show_info(CALC calc){
    //TBD
}

int somar(int resposta, CALC calc){
    //TBD
}

int diminuir(int resposta, CALC calc){
    //TBD
}

int multiplicar(int resposta, CALC calc){
    //TBD
}