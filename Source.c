#include <stdio.h>

//Main function
int main(void)
{
	int A;	//First number
	int B;	//Second number

	printf("Enter the first interger\n");
	scanf("%d", &A);	//read an integer

	printf("Enter the second integer\n");
	scanf("%d", &B);	

	int sum;
		sum = A + B;

	printf("sum is %d\n", sum);
}
