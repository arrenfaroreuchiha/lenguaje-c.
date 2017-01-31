#include <stdio.h>
#include <stdlib.h>
int a,b,c,i;
int z=1;
int x=0;
int q=0;
int main(){
    printf ("el exponente de un numero: \n");
    printf ("cual es la base:");
    scanf ("%d",&a);
    printf ("cual es el exponente:");
    scanf ("%d",&b);
    for (i=1; i<=b; i++){
        z=z * a;
        }
  printf ("la potencia es: %d \n", z);
  system("PAUSE");	
  return 0;
}
