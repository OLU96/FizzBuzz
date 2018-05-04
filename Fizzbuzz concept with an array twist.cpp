#include <iostream>
using namespace std;





int main()
{
	int val[100];
	int n, result = 0;
	int p = 5, q = 12;
		for (n = 0; n < 100; ++n)
		{
			 val[n]=n;
		}

		for (n = 1; n < 100; ++n)
		{
			if (val[n] % p == 0 && val[n] % q == 0)

				cout << "OUTTHINK" << endl;
			else if (val[n] % p != 0 && val[n] % q != 0)
				cout << n << endl;
			else if (val[n] % p == 0)
				cout << "OUT" << endl;
			else if (val[n] % q == 0)
				cout << "THINK" << endl;

		}



		return 0;

}