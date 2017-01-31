#include <stdio.h>
#include <stdlib.h>
int a, b,c,i,total,total1;
int contador = 0;
int contador1 = 0;
int suma = 0;

int main(){
    printf ("numeros pasres, impares y promedio de cada uno \n");
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=1; i<=a; i++){
        printf ("digita el numero:");
        scanf ("%d",&b);
        c = b % 2;
        if (c==suma){
                  printf ("es par \n");
                  contador = contador + b;
                  printf ("----------------- \n");
                  }
        else {
             printf ("impar \n");
             contador1 = contador1 + a;
             printf ("---------------------- \n");
             }
        }
  total = contador / a;
  total1 = contador1 / a;
  printf ("el promedio de los numeros pares es: %d \n", total);
  printf ("el promedio de los numeros impares es: %d \n", total1);
  system("PAUSE");	
  return 0;
}
