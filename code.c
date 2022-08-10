#include <stdio.h>

int main() {
    // Declaracion de variables:
    int var1, var2, var3;
    /*Pedimos los numeros a los usuarios 
    para asignar valor a las variables;*/
    printf("Introduzca el primer valor: \n");
    scanf("%d", &var1);
    printf("Introduzca el segundo valor: \n");
    scanf("%d", &var2);
    printf("Introduzca el tercer valor: \n");
    scanf("%d", &var3);
    // Comparaciones
    if(var1>var2 && var1>var3){
        printf("El número mayor es %d", var1);
    }else if(var2>var1 && var2>var3){
        printf("El número mayor es %d", var2);
    }else if(var3>var1 && var3>var2){
        printf("El número mayor es %d", var3);
    }
    // Si no se encuentra numero mayor se verifica que no haya iguales
    else{
        if(var1 == var2 || var1 == var3){
            if(var2>var3){
                printf("El número mayor es: %d",var2);
            }else{
                printf("El número mayor es: %d",var3);
            }
        } else if(var2 == var1 || var2 == var3){
            if(var1>var3){
                printf("El número mayor es: %d",var2);
            }else{
                printf("El número mayor es: %d",var3);
            }
        } 
    }
    return 0;
}
