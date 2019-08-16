#include <stdio.h>
 
int main() {
 
	int N, Horas, horaSeg, Minutos, Segundos;
	horaSeg=3600;
	scanf("%d", &N);
	Horas = (N/horaSeg);
	Minutos = (N -(horaSeg*Horas))/60;
	Segundos = (N-(horaSeg*Horas)-(Minutos*60));
	printf("%d:%d:%d\n",Horas,Minutos,Segundos);
 
    return 0;
}