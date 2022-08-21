//float
#include<stdio.h>
int main(){
	float price=100.00;
	float *ptr=&price;
	printf("%d\n",ptr);
	ptr++;
	printf("%d\n",ptr);
	ptr--;
	printf("%d\n",ptr);
	return 0;
}
