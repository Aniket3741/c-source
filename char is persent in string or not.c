//char is present in string or not\
#include<stdio.h>

void checkChar(char str[],char ch);
int main(){
	char str[]="aniket";
	char ch='p';
	checkChar(str,ch);

}
int i;
void checkChar(char str[],char ch){
	for(i=0;str[i]!=0;i++){
		if(str[i]==ch){
			printf("character is persent");
			return;
		}
	}
	printf("character is  not persent");
}

