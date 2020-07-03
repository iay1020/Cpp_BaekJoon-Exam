#include<iostream>
using namespace std;
int main()
{
	int n, x;
	x = -1;
	cin >> n;
	
	for (int i = 0; i < n * 2 - 1; ++i)
	{
		if (i < n) x++;
		else x--;

		for (int j = 0; j < x; ++j)
			cout << " ";
		
		for (int k = 0; k < (n * 2 - 1) - x * 2; ++k)
			cout << "*";
		cout << endl;

	}

	return 0;
}

// ют╥б 3
// *****
//  ***
//   *
//  ***
// *****