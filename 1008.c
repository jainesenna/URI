#include <stdio.h>
 
int main() {
 
	int num,h;
	float valorH, SALARY;
	scanf("%d %d %f",&num,&h,&valorH);
	SALARY = h*valorH;
	printf("NUMBER = %d\n",num);
	printf("SALARY = U$ %.2f\n",SALARY);
 
    return 0;
}