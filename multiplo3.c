#include <stdio.h>
#include <stdlib.h>
int a,b,c,i;
int contador = 0;
int suma = 0;
int main(){
    printf ("numeros primos \n");
    printf ("cuantos numeros:");
    scanf ("%d",&b);
    for (i=1; i<=b; i++){
        printf ("cual es el numero:");
        scanf ("%d",&a);
        c = a % 3;
        if (c==suma){
                 printf ("es multiplo de 3 \n");
                 contador = contador + a;
                 }
        else{
             printf ("no es multiplo \n");
             }
        }
        
  printf ("la suma de los multiplos de 3 es: %d \n", contador);
  system("PAUSE");	
  return 0;
}
