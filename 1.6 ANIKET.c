//char
#include<stdio.h>
int main(){
	char star='*';
	float *ptr=&star;
	printf("%d\n",ptr);
	ptr++;
	printf("%d\n",ptr);
	ptr--;
	printf("%d\n",ptr);
	return 0;
}
