#include <stdio.h>
#include <stdlib.h>
int a,b,i;
int contador = 0;

int main(){
    printf ("sumando numeros 2 \n");
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=1; i<=a; i++){
        printf ("---------------------------- \n");
        printf ("cual es el numero:");
        scanf ("%D",&b);
        if (b==2){
                  contador = contador + b;
                  }
        }
        printf ("-------------------------\n");
    printf ("la suma de los numeros 2 es: %d \n", contador);
  
  system("PAUSE");	
  return 0;
}
