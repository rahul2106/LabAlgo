#include<stdio.h>
struct Student{
	char c[10];
	int r;
	float g;
}s;
int main()
{  gets(s.c);
	scanf("%d %f",&s.r,&s.g);
	printf("Name:%s\nRoll: %d \nGPA:%0.2f",s.c,s.r,s.g);
	return 0;
}
