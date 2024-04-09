#include<stdio.h>
#include<string.h>
#include"Structure_header.h"
/*function for inputing student results*/
void inputresults(struct student *result,int size)
{
	printf("Enter student details\n");
	for (int i = 0; i < size; i++) 
	{
	    printf("student %d\n", i + 1);
	    printf("Reg no:");
	    scanf("%d", &result[i].registration_number);
	    printf("Student name:");
	    scanf("%s", result[i].student_name);
	    printf("Unit name:");
	    scanf("%s", result[i].unit_name);
	    printf("Final result:");
	    scanf("%d", &result[i].final_result);
        }

}	
/*function for printing student results*/	
void printresults(struct student *results,int size)
{	for(int i=0;i<size;i++)
	{
		printf("student %d\n", i+1);
		printf("Reg no: %d\n",results[i].registration_number);
		printf("Name: %s\n",results[i].student_name);
		printf("Unit name:%s\n",results[i].unit_name);
		printf("Result: %d\n",results[i].final_result);
	
	}
	
	
}			
	

