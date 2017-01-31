#include <stdio.h>
#include <stdlib.h>
int a,b, c,d,e,i;
int contador = 0;
int contador1 = 0;
int main(){
    printf ("sumando numeros primos en una multiplicacion \n");
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=1; i<=a; i++){
        printf ("----------------------------- \n");
        printf ("cual es el numero:");
        scanf ("%d",&b);
        printf ("numero que se va a multiplicar por el numero anterior:");
        scanf ("%d",&e);
        c = b * e;
        d = c % 2;
        if (d==1){
                  printf ("el numero es primo \n");
                  contador = contador + b;
                  }
        else{
             printf ("no es primo \n");
             contador1 = contador1 + b;
             }
        }
    printf ("----------------------------- \n");
    printf ("la suma de los numeros primos es: %d \n", contador);
    printf ("la suma de los numeros que no son primos es: %d \n", contador1);
  
  system("PAUSE");	
  return 0;
}
