/*Write a C Program to that defines a structure employee containing details such as empno,empname, department and salary. 
The structure has to store 20 employees in an org. Use apt method to define details and function to display contents*/

#include <stdio.h>
struct employee
{
	int empno;
	char name[25];
    int phno;
	float salary;
};

void rest(struct employee emp[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("\n%d) Enter ID, Name, Phone-no. & Salary:\n", i+1);
		scanf("%d%s%d%f", &emp[i].empno, emp[i].name, &emp[i].phno, &emp[i].salary);
	}
}

void prst(struct employee emp[], int n)
{
	for(int i=0; i<n; i++)
		printf("\n	| %5d | %7d | %20s | %14d |%15.2f |", i+1, emp[i].empno, emp[i].name, emp[i].phno, emp[i].salary);
}

int main()
{
	int n;
	printf("Enter no. of entries: ");
	scanf("%d", &n);
	struct employee emp[n];

	rest(emp,n);
	printf("\nEmployee details :\n\n	| EM.no |  EMP-ID |        EMP-Name      |    PhoneNo.    |    EMP-Salary  |");
	prst(emp,n);
	return 0;
}


