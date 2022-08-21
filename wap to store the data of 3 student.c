#include<stdio.h>
intmain(){
	//user defined
	struct student{
		int roll;
		float cgpa;
		char name[100];
	};
	
	int main(){
		struct student s1;
		s1.roll=210101120019;
		s1.cgpa=7.6;
		//s1.name="aniket kumar";
		strcpy(s1.name,"aniket");
		
		printf("student name =%s\n",s1.name);
		printf("student roll no =%d\n",s1.roll);
		printf("student cgpa=%f\n",s1.cgpa);
		
		return 0;
		
		struct student s2;
		s2.roll=210101120019;
		s2.cgpa=7.9;
		//s2.name="aniket kumar";
		strcpy(s2.name,"aniket");
		
		printf("student name=%s\n",s2.name);
		printf("student roll no =%d\n",s2.roll);
		printf("student cgpa=%f\n",s2.cgpa);
		return 0;
		
		struct student s3;
		s3.roll=210101120019;
		s3.cgpa=8.2;
		//s3.name="aniket kumar";
		strcpy(s3.name,"aniket");
		
		printf("student name=%s\n",s3.name);
		printf("student roll no =%d\n",s3.roll);
		printf("student cgpa=%f\n",s3.cgpa);
		return 0;
	}
}
