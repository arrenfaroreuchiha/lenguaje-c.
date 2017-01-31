#include <stdio.h>
#include <stdlib.h>
int a,b,c,i;
int contador = 0;

int main(){
    printf ("sumando multiplo de dos \n");
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=1; i<=a; i++){
        printf ("-------------------------- \n");
        printf ("cual es el numero:");
        scanf ("%d",&b);
        c = b % 2;
        if (c==0){
                  printf ("es multiplo de 2 \n");
                  contador = contador + b;
                  }
        }
    printf ("----------------------- \n");
  printf ("la suma de los multiplos de 2 es:%d \n", contador);
  system("PAUSE");	
  return 0;
}
