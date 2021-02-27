#include <stdio.h>
int main()
{
	int marks;
	printf("enter the marks of the student");
	scanf("%d",&marks);

		if(marks<=100&&marks>=85)
		{
		
		printf("grade of student is A");
		
	}
	else if(marks<=84&&marks>=70)
	{
		printf("grade of student is B");
	}
	else if(marks<=69&&marks>=55)
	{
		printf("grade of student is C");
	}
	else if(marks>=54&&marks<=40)
	{
		printf("grade of student is D");
	}
	else if (marks<40)
	{
		printf("grade of student is F");
	}
}
