#include <stdio_ext.h>
#include <stdlib.h>
#define TAM 5
int main()
{
    int nota[TAM];
    int  acumulador=0;
    float promedio;
    for(int i=0;i<5;i++){
        printf("ingrese la nota numero %d: ",i+1);
        while(scanf("%d",&nota[i])!=1 || (nota[i]<1 || nota[i]>10)){
            printf("Error , ingrese  otra vez la  nota");
            __fpurge(stdin);
        }
        acumulador=acumulador+nota[i];
    }
    promedio=(float)acumulador/TAM;
    printf("El promedio total es de: %.2f",promedio);
    return 0;
}
