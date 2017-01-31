#include <stdio.h>
#include <stdlib.h>
int a,b,i;
float c;
int contador1=0;
float contador=0;
float promedio=0;
int main(){
    printf ("promedio de la notas de materias \n");
    printf ("cuantas materias:");
    scanf ("%d",&a);
    for (i=1; i<=a; i++){
        printf ("puntaje e la materia:");
        scanf ("%f",&c);
        printf ("creditos:");
        scanf ("%d",&b);
        contador = contador+c;
        contador1 = contador1+b;
        promedio = contador / a;
        }
printf ("el promedio de las notas es:%f \n", promedio);
printf ("la suma de los creditos son:%d \n", contador1);
printf ("la suma de las notas son:%f \n", contador);
        
    
  
  system("PAUSE");	
  return 0;
}
