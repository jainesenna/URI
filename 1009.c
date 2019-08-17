#include <stdio.h>
 
int main() {
 
	char nome;
	double A,B, TOTAL;
	scanf("%s",&nome);
	scanf("%lf %lf",&A,&B);
	TOTAL = (A+B*0.15);
	printf("TOTAL = R$ %.2f\n",TOTAL);
 
    return 0;
}