#include <stdio.h>

int main() {

  double A;
  scanf("%lf",&A);
  if(A<0 || A>100.00){
    printf("Fora de intervalo\n");
  }else if(A<=25.00){
    printf("Intervalo [0,25]\n");
  }else if(A<=50.00){
    printf("Intervalo (25,50]\n");
  }else if(A<=75.00){
    printf("Intervalo (50,75]");
  }else if(A<=100.00){
    printf("Intervalo (75,100]\n");
  }
  return 0;

}