#include <stdio.h>
 
int main() {
 
	double valor,E;
	int nota,b,d,f,h,j,B,m,o,q,s;
	int cem,cinq,vint,dez,cinco,dois;
	int mUm,mCinq,mVintCinco,mDez,mCinco,mUmCent;
	scanf ("%lf",&valor);

	nota = valor;
	cem = nota/100;
	b = nota%100;
	cinq = b/50;
	d = b%50;
	vint = d/20;
	f = d%20;
	dez = f/10;
	h = f%10;
	cinco = h/5;
	j = h%5;
	dois = j/2;
	mUm = j%2;
	
	E = valor*100;
	B = (int) E;
	m = B%100;
	mCinq = m/50;
	o = m%50;

	mVintCinco = o/25;
	q = o%25;
	mDez = q/10;
	s = q%10;
	mCinco = s/5;
	mUmCent = s%5;

	printf ("NOTAS:\n");
	printf ("%d nota(s) de R$ 100.00\n",cem);
	printf ("%d nota(s) de R$ 50.00\n",cinq);
	printf ("%d nota(s) de R$ 20.00\n",vint);
	printf ("%d nota(s) de R$ 10.00\n",dez);
	printf ("%d nota(s) de R$ 5.00\n",cinco);
	printf ("%d nota(s) de R$ 2.00\n",dois);

	printf ("MOEDAS:\n");
	printf ("%d moeda(s) de R$ 1.00\n",mUm);
	printf ("%d moeda(s) de R$ 0.50\n",mCinq);
	printf ("%d moeda(s) de R$ 0.25\n",mVintCinco);
	printf ("%d moeda(s) de R$ 0.10\n",mDez);
	printf ("%d moeda(s) de R$ 0.05\n",mCinco);
	printf ("%d moeda(s) de R$ 0.01\n",mUmCent);
	
 
    return 0;
}