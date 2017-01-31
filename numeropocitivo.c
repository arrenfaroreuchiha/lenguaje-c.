#include <stdio.h>
#include <stdlib.h>
int a,b,i;

int main(){
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=1; i<=a; i++){
        printf ("cuales son los numeros:");
        scanf ("%d",&b);
        if (b>0){
                 printf ("el numero es pocitivo \n", b);
                 }
        else{
             printf ("el numero es negativo \n", b);
             }
        }
        
  
  system("PAUSE");	
  return 0;
}
