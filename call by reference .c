//call by reference
#include<stdio.h>
void square(int n);
void _square(int *n);
int main(){
	int number=10;
	square(number);
	printf("%d\n",number);
	
	_square(&number);
	return 0;
}
void square(int n){
	n=n*n;
	printf("square=%d\n",n);
}
void _square(int *n){
	*n=(*n) * (*n);
	printf("square=%d\n",*n);
}
