#import <Foundation/Foundation.h>

int main()
{
	@autoreleasepool {
		int triangularNumber;
		int number;
		triangularNumber = 0;

		printf("What triangular number do you want? ");
		scanf("%i", &number);
		for (int n = 1; n <= number; ++n)
			triangularNumber += n;
		printf("The %ith triangular number is %i\n", number, triangularNumber);
	}
	return 0;
}
