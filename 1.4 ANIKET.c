#include<stdio.h>
int main(){
	int age=19;
	int *ptr=&age;
	printf("%d\n",ptr);
	ptr++;
	printf("%d\n",ptr);
	return 0;
}
