#include <stdio.h>
#include <stdlib.h>
int a,b,i;
int c=0;
int main(){
  printf ("numero de veces que quiere que se suma:");
  scanf ("%d",&a);
  for (i=1; i<=a; i++){
    printf ("numero:");
    scanf ("%d",&b);
    c = c + b;  
  }
  
  
    printf ("total es:%d \n", c);
  
  system("PAUSE");	
  return 0;
}
