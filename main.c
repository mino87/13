#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int     ID;
	char    name[10];
	double  grade;
};

int main(void){
	struct student s1= {24,"ju",4.3};


	
	printf("ID : %d\n",s1.ID);
	printf("name : %s\n",s1.name[10]);
	printf("grade : %f",s1.grade);
}
