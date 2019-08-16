#include <stdio.h>

int main() {

  int valor,notas, cem , cinq , vinte , dez , cinco , dois , um;
  scanf("%d",&valor);
  notas = valor;
  cem = notas / 100;
  notas = notas - (cem *100);
  cinq = notas / 50;
  notas = notas - (cinq * 50);
  vinte = notas / 20;
  notas = notas - (vinte * 20);
  dez = notas /10;
  notas = notas -(dez * 10);
  cinco = notas / 5;
  notas = notas - (cinco * 5);
  dois = notas / 2;
  notas = notas - (dois * 2);
  printf("%d\n",valor);
  printf("%d nota(s) de R$ 100,00\n",cem);
  printf("%d nota(s) de R$ 50,00\n",cinq);
  printf("%d nota(s) de R$ 20,00\n",vinte);
  printf("%d nota(s) de R$ 10,00\n",dez);
  printf("%d nota(s) de R$ 5,00\n",cinco);
  printf("%d nota(s) de R$ 2,00\n",dois);
  printf("%d nota(s) de R$ 1,00\n",notas);

  return 0;

}
