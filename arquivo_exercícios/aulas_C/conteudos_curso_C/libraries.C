#include <stdio.h>

/*
    -> bibkioteca padrão de C, tendo as funções de entrada e saída padrão

        "standart input output"

        printf("");
        scanf();
        fscanf();
        gets();
        fgets();
        fgetc();
        fputc();
        fputs();
        getchar();

    -> tem funções de acesso a arquivos 

        fopen();

    -> limpador de buffer, corrigindo bugs no wndows:

        fflush();

    -> Tratamento de erros:

        feof()  (usado em um while para percorrer um arquivo até o fim dele)

    -> Tipos e Macros:

        FILE
        NULL
        EOF
    ---------------------------------------------------------------------------

*/

#include <stdlib.h>

/*
    -> Funções:

        atof();     (converte strings para double)
        atoi();     (converte string para inteiro)
        atol();     (converte string para ineiro longo)

    -> Geração de sequencia pseudo-aleatória:

        rand() % n;     (numero aleatorio)
        srand();    (inicializa o gerador de numero aleatório)

    -> Gerênciamento de memória:

        malloc();
        callod();
        free();
        realoc();

    -> Ordenação e pesquisa:

        qsort();    (ordena os elementos de um array) ( ex: qsort(numeros, 7, sizeof(int), (void *)compara); )
        
    -> Aritimética de inteiros

        abs();   (valor absoluto)
        div();   (divisão inteira) 
    -----------------------------------------------------------------------------
*/

#include <math.h>

/*
    -> Funções Trigonométricas

        cos()    (calcula o cosseno de um ângulo em radianos)
        sin()    (calcula o seno de um ângulo em radianos)
        tang()   (calcula a tangente de um ângulo em radianos)
    
    -> Funções hiperbóolicos

        cosh()
        sinh()
        tanh()

    -> Funções exponenciais e logarítmicas

        exp()    (calculo exponencial)
        log()    (calculo logarítmico natural)
        log10()  (logarítimo de base 10)
    
    -> Funçõs de potência 

        pow()    (retorna a base elevada ao expoente)
        sqrt()   (raiz quadrada de um numero)
    
    -> Arredondamento

        ceil()   (arredonda para cima um numero)
        floor()  (arredonda para baixo um numero)
----------------------------------------------------------------------

*/

#include<ctype.h>

/*
    -> Serve para fazer testes de caracteres 

        isalnum()    (verifica se o caractere é alfanumérico [abc123])
        isalpha()    (verifica se o caractere é alfabético [abcde])
        isdigit()    (verifica se o caractere é um digito decimal [01234])
        ispunct()    (verfica se o caractere é uma pontuação [!?.])
        isspace()    (verofoca se é um espaço)
        isupper()    (verifica se o caractere é maiusculo)
        islower()    (verifica se é minusculo)
        tolower()    (converte para minusculo)
        toupper()    (converte para maiúscula)

    -----------------------------------------------------------------------
*/

#include <string.h>

/*
    -> Operações em strings

        strcpy()     (copia uma string)
        strcat()     (concatena strings)
        strcmp()     (compara duas strings, retornando se forem diferentes)
    
    -> Busca

        strchr()     (localiza a primeira ocorrencia de caractere em uma string)
        strtok()     (divide uma string em substrings tendo como bas um caractere)
        strlen()     (retorna o tamanho da string)

    ------------------------------------------------------------------------

*/

#include <time.h>

/*
    -> Funções de data e hora

        clock()    (retorna o numero de pulsos de clock desde o momento de lançamento do programa)
            CLOCKS_PER_SEC      (calcula o numero de clocks por segundo [constante])
        time()     (retorna o tempo atual do clendario)
        localtime()     (converte o valor time para uma hora local)
            time_t      (strct)
        
    -------------------------------------------------------------

*/