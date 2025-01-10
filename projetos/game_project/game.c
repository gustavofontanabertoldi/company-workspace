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
    char op[25];

    if (calc.operacao == 0){
        sprintf(op, "Somar");
    }else if(calc.operacao == 1){
        sprintf(op, "Diminuir");
    }else if(calc.operacao == 2){
        sprintf(op, "Multiplicar");
    }else{
        sprintf(op, "Operação desconhecida!");
    }

    printf("Valor 1: %d \nValor 2: %d \nDificuldade: %d \nOperação: %s \n", calc.valor1, calc.valor2, calc.dificuldade, calc.operacao);
}

int somar(int resposta, CALC calc){
    int resultado = calc.valor1 + calc.valor2;
    calc.resultado = resultado;
    int certo = 0;

    if(resposta == calc.resultado){
        printf("Resposta correta!");
        certo = 1;
    }else{
        printf("Resposta errada!");
    }

    printf("%d + %d = %d\n", calc.valor1, calc.valor2, calc.resultado);

    return certo;
}

int diminuir(int resposta, CALC calc){
    int resultado = calc.valor1 - calc.valor2;
    calc.resultado = resultado;
    int certo = 0;

    if(resposta == calc.resultado){
        printf("Resposta correta!");
        certo = 1;
    }else{
        printf("Resposta errada!");
    }

    printf("%d - %d = %d\n", calc.valor1, calc.valor2, calc.resultado);

    return certo;
}

int multiplicar(int resposta, CALC calc){
    int resultado = calc.valor1 * calc.valor2;
    calc.resultado = resultado;
    int certo = 0;

    if(resposta == calc.resultado){
        printf("Resposta correta!");
        certo = 1;
    }else{
        printf("Resposta errada!");
    }

    printf("%d x %d = %d\n", calc.valor1, calc.valor2, calc.resultado);

    return certo;
}