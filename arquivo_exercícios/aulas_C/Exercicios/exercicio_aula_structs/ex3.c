#include<stdio.h>
#include<string.h>

typedef struct vetor {
    float x;
    float y;
    float z;
} VET;

int main() {
    VET v1, v2;

    v1.x = 2;
    v1.y = 6;
    v1.z = 0;

    v2.x = 4;
    v2.y = 5;
    v2.z = 0;

    float result1;
    float result2;
    float result3;
    float soma_geral;

    result1 = v1.x + v2.x;
    result2 = v1.y + v2.y;
    result3 = v1.z + v2.z;

    soma_geral = v1.x + v2.x + v1.y + v2.y + v1.z + v2.z;

    printf("Soma x: %.2f, Soma y: %.2f, Soma z: %.2f\n", result1, result2, result3);
    printf("Soma geral: %.2f\n", soma_geral);

    return 0;
}
