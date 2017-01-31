#include <stdio.h>
#include <stdlib.h>
int a,b,c,i;
int contador = 0;
int contador1 = 0;
int suma = 0;

int main(){
  printf ("menor y mayor de numeros dados \n");
  printf ("cuantos numeros:");
  scanf ("%d",&a);
  for (i=0; i<a; i++){
      printf ("cual es el numero:");
      scanf ("%d",&b);
      if (i==suma){
          contador = b;
          }
      if (b<contador){
          contador = b;
          }
      if (b > contador1){
           contador1 = b;
           }
      }
   printf ("el numero menor es: %d \n", contador);
   printf ("el numero mayor es: %d \n", contador1);   
  system("PAUSE");	
  return 0;
}
