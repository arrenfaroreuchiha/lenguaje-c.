#include <stdio.h>
#include <stdlib.h>
int a,b,i;
int suma=0;

int main(){
    printf ("numero positivo o negativo \n");
    printf ("cuantos numeros:");
    scanf ("%d",&a);
    for (i=1; i<=a; i++){
        printf ("digita el numero:");
        scanf ("%d",&b);
        if (b>suma){
                 printf ("el numero es pocitivo \n");
                 }
        else {
             printf ("es negativo \n");
             }         
        }
  
  system("PAUSE");	
  return 0;
}
