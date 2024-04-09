struct student
{
	int registration_number;
	char student_name[100];
	char unit_name[100];
	int final_result;
};
void inputresults(struct student *result,int size);
void printresults(struct student *results,int size);

