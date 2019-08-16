#include <stdio.h>
 
int main() {
 
	int NUM,ANO,MES,DIA;
	scanf("%d",&NUM);
	ANO = NUM/365;
	MES = (NUM%365)/30;
	DIA = (NUM%365)%30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ANO,MES,DIA);

    return 0;
}