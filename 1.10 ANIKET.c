//2D array
#include<stdio.h>
int main(){
	//2*3
	int marks[2][3];
	marks[0][0]=90;
	marks[0][1]=80;
	marks[0][2]=70;
	
	marks[1][0]=60;
	marks[1][1]=50;
	marks[1][2]=40;
	
	printf("%d\n",marks[0][0]);
	printf("%d\n",marks[0][1]);
	printf("%d\n",marks[0][2]);
	
	printf("%d\n",marks[1][0]);
	printf("%d\n",marks[1][1]);
	printf("%d\n",marks[1][2]);
	return 0;
}
