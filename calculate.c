#include <stdio.h>

int main()
{
	float num1 = 1;
	float num2 = 1;
	float result = 0;
	char operation;
	char choice = 0;
	int end_val = 0;

	while (num1 != end_val)
	{
		printf("Enter your first number or enter 0 to quit:\n ");
		scanf_s("%f", &num1);
		if (num1 == end_val)
		{
			break;
		}
		printf("Enter an operatrion (+, -, *, /):\n ");
		scanf_s(" %c", &operation);

		printf("Enter your second number:\n ");
		scanf_s("%f", &num2);

		if (operation == '+')
		{
			result = (num1 + num2);
		}
		else if (operation == '-')
		{
			result = (num1 - num2);
		}
		else if (operation == '*')
		{
			result = (num1 * num2);
		}
		else if (operation == '/')
		{
			if (num2 != 0)
			{
				result = (num1 / num2);
			}
			else
			{
				printf("Cannot divide by zero!\n");
				continue;
			}
		 
		}
		else
		{
			printf("Invalid operation!\n");
			continue;
		}
		printf("Your answer is %.2f\n " , result);

		do
		{
			printf("Would you like to calculate again (y/n): ");
			scanf_s(" %c", &choice);

			if (choice != 'y' && choice != 'Y' &&
				choice != 'n' && choice != 'N')
			{
				printf("Invalid choice. Please enter y or n.\n");
			}

		} while (choice != 'y' && choice != 'Y' &&
			choice != 'n' && choice != 'N');

		if (choice == 'n' || choice == 'N')
		{
			break;
		}
		

	}
	return 0;

}