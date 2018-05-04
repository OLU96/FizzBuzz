#include <iostream>
#include <fstream>
#include <string>
using namespace std;





int main()
{
	int myarray[6] = { 2, 5, 6, 9, 3, 4 };
	int target;
	cin >> target;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			if (myarray[i] + myarray[j] == target)
			{
				cout << myarray[i] << "," << myarray[j] << endl;
			}
		}
	}

return 0;

}