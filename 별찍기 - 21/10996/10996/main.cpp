#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (j % 2 == 0) cout << "*";
			else cout << " ";

		}
		cout << endl;

		for (int k = 0; k < n; ++k)
		{
			if (k % 2 == 1) cout << "*";
			else cout << " ";

		}
		cout << endl;

	}

	return 0;
}

// 입력 1
// *

// 입력 2
// *
//  *
// *
//  *

// 입력 3
// * *
//  *
// * *
//  *
// * *
//  *

// 입력 4
// * *
//  * *
// * *
//  * *
// * *
//  * *
// * *
//  * *

// 가로 입력 * 2
// 홀수는 위에 짝수는 아래