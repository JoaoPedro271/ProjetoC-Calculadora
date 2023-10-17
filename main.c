#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operador;

   
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    
    while (getchar() != '\n');

    
    printf("Escolha uma operacao (+, -, *, /): ");
    scanf("%c", &operador);

    
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

   
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: Divisao por zero!\n");
                return 1; 
            }
            break;
        default:
            printf("Operação invalida.\n");
            return 1; 
    }

  
    printf("Resultado: %lf\n", resultado);

    return 0; 
}

