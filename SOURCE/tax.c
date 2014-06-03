#include <stdio.h>


int main(int argc, char const *argv[])
{
	float grossIncome = 0.0;
	float incomeTax = 0.0;

	printf("Please enter your anual income: ");
	scanf("%f", &grossIncome);

	printf("Your gross income: %0.2f\n", grossIncome);

	////////////////////////////////////////////////////////////////
	if (grossIncome >= 0.0 && grossIncome <= 18200.0)
	{
		incomeTax = 0.00;
		printf("You pay $%0.2f in tax\n", incomeTax );
	}
	////////////////////////////////////////////////////////////////	
	if (grossIncome >= 18201.0 && grossIncome <= 37000.0)
	{
		incomeTax = (grossIncome - 18200) * 0.19;
		printf("You pay $%0.2f in tax\n", incomeTax );
	}
	////////////////////////////////////////////////////////////////
	if (grossIncome >= 37001 && grossIncome <= 80000)
	{
		incomeTax = ((grossIncome - 37000) * 0.325) + 3572;
		printf("You pay $%0.2f in tax\n", incomeTax );
	}
	////////////////////////////////////////////////////////////////
	if (grossIncome >= 80001 && grossIncome <= 180000)
	{
		incomeTax = ((grossIncome - 80000) * 0.37) + 17547;
		printf("You pay $%0.2f in tax\n", incomeTax );
	}
	////////////////////////////////////////////////////////////////
	if (grossIncome > 180000)
	{
		incomeTax = ((grossIncome - 180000) * 0.45) + 54547;
		printf("You pay $%0.2f in tax\n", incomeTax );
	}
 


	return 0;
}