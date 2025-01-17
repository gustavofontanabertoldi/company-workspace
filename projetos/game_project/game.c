#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>

typedef struct calcula{
    int dificuldade;
    int valor1;
    int valor2;
    int operacao;
    int resultado;
}CALC;

void play();
void show_info(CALC calc);
int somar(int resposta, CALC calc);
int diminuir(int resposta, CALC calc);
int multiplicar(int resposta, CALC calc);

int pontos = 0;

int main(){

    //must be declared only one time
    srand(time(NULL));
    play();
    return 0;
}

void play(){
    CALC calcular;
    int dificuldade;

    printf("Informe o nível de dificuldade desejado [1, 2, 3 ou 4]: ");
    scanf("%i", &dificuldade);

    calcular.dificuldade = dificuldade;

    //gera uma valor inteiro randomico entre 0 e 2
    // 0 == somar; 1 == diminuir; 2 == multiplicar;
    calcular.operacao = rand() % 3;

    if (calcular.dificuldade == 1){
        //facil
        calcular.valor1 = rand() % 11;
        calcular.valor2 = rand() % 11;
    }else if(calcular.dificuldade == 2){
        //medio
        calcular.valor1 = rand() % 101;
        calcular.valor2 = rand() % 101;
    }else if(calcular.dificuldade == 3){
        //dificil
        calcular.valor1 = rand() % 1001;
        calcular.valor2 = rand() % 1001;
    }else if(calcular.dificuldade == 4){
        //insano
        calcular.valor1 = rand() % 10001;
        calcular.valor2 = rand() % 10001;
    }else{
        //ultra
        calcular.valor1 = rand() % 100001;
        calcular.valor2 = rand() % 100001;
    }

    int resposta;

    printf("Informe o resultado para a seguinte operação: ");

    //somar
    if(calcular.operacao == 0){
        printf("%d + %d\n", calcular.valor1, calcular.valor2);
        scanf("%d", &resposta);

        if(somar(resposta, calcular)){
            pontos =+ 1;
            printf("Você tem %d pontos", pontos);
        }
    }else if(calcular.operacao == 1){
        printf("%d - %d\n", calcular.valor1, calcular.valor2);
        scanf("%d", &resposta);

        if(diminuir(resposta, calcular)){
            pontos =+ 1;
            printf("Você tem %d pontos", pontos);
        }
    }else if(calcular.operacao == 2){
        printf("%d x %d\n", calcular.valor1, calcular.valor2);
        scanf("%d", &resposta);

        if(multiplicar(resposta, calcular)){
            pontos =+ 1;
            printf("Você tem %d pontos", pontos);
        }
    }else{
        printf("A operação não é reconhecida.");
    }

    //recomeçar o jogo?
    printf("\nDeseja continuar jogando? [1 = Sim, 2 = Não]\n");
    int continuar;
    scanf("%d", &continuar);

    if(continuar == 1){
        play();
    }else if(continuar ==2){
        printf("Você finalizou com %d pontos.\n", pontos);
        printf("Até a próxima!");
    }else{
        printf("Número inválido!");
    }

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

    printf("Valor 1: %d \nValor 2: %d \nDificuldade: %d \nOperação: %s \n", calc.valor1, calc.valor2, calc.dificuldade, op);
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