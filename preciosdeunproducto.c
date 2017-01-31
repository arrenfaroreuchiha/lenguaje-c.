#include <stdio.h>
#include <stdlib.h>
int a,c,d,i;
char b;
int contador = 0;
int subtotal = 0;
int total1 = 0;
int iva = 0;
int total = 0;

int main(){
  printf ("iva, total, subtotal y promedio de los productos \n");
  printf ("cuantos productos:");
  scanf ("%d",&a);
  for (i=1; i<=a; i++){
      printf ("------------- \n");
      printf ("nombre del producto:");
      scanf ("%s",&b);
      printf ("cantidad del producto:");
      scanf ("%d",&c);
      contador = contador + c;
      printf ("valor del producto:");
      scanf ("%d",&d);
      subtotal = subtotal + d;
      }
  printf ("----------------------- \n");
  total1 = subtotal * contador;
  iva = total1 * 16 / 100;
  total = total1 + iva;
  printf ("el subtotal de los productos es: %d \n", total1);
  printf ("el iva de los productos es: %d \n", iva);
  printf ("el total de los productos es: %d \n", total); 
  system("PAUSE");	
  return 0;
}
