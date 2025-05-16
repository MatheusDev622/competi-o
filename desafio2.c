#include <stdio.h>
#define E 0.001
int main() {
    double num;
    printf("Digite um número Para ver a aproximação da sua raiz quadrada: ");
    scanf("%lf", &num);

    if (num < 0) {
        printf("Não é possível calcular a raiz quadrada de um número negativo(Conjunto dos imaginários).\n");
    } else {
        double chute = num / 2.0;

        while ((chute * chute - num) > E || (num - chute * chute) > E) {
            chute = (chute + num / chute) / 2.0;
        }

        printf("Aproximação da raiz quadrada: %.6lf\n", chute);
    }

    return 0;
}
