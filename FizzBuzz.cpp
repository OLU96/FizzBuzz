#include <iostream>
using namespace std;


int main()
{
	for (int number = 1; number <= 50; number++)
	{


		if (number % 3 == 0 && number % 5 == 0)
		{
			cout << "FizzBuzz" << endl;
		}

		else if (number % 3 == 0)
		{
			cout << "Fizz " << endl;
		}
		else if (number % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
		else
		{
			cout << number << endl;
		}
	}

	return 0;
}