#include<stdio.h>
int main(){
	int age;
	printf("enter age");
	scanf("%d\n",&age);
	
  if(age>18){
  	printf("adult");
  }
  else if("age<18 && age>13"){
  	printf("tennager");
  }
  else{
  	printf("child");
  }
  return 0;
}
