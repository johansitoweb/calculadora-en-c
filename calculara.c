#include <stdio.h>  

int main() {  
    char operacion;  
    float num1, num2, resultado;  

    printf("Ingrese una operacion (+, -, *, /): ");  
    scanf(" %c", &operacion); // Espacio antes de %c para ignorar cualquier espacio en blanco previo  

    printf("Ingrese el primer numero: ");  
    scanf("%f", &num1);  

    printf("Ingrese el segundo numero: ");  
    scanf("%f", &num2);  

    switch(operacion) {  
        case '+':  
            resultado = num1 + num2;  
            printf("Resultado: %.2f\n", resultado);  
            break;  
        case '-':  
            resultado = num1 - num2;  
            printf("Resultado: %.2f\n", resultado);  
            break;  
        case '*':  
            resultado = num1 * num2;  
            printf("Resultado: %.2f\n", resultado);  
            break;  
        case '/':  
            if(num2 != 0) {  
                resultado = num1 / num2;  
                printf("Resultado: %.2f\n", resultado);  
            } else {  
                printf("Error: Division por cero.\n");  
            }  
            break;  
        default:  
            printf("Operacion no valida.\n");  
            break;  
    }  

    return 0;  
}