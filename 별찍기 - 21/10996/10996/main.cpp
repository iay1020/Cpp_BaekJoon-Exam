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

// �Է� 1
// *

// �Է� 2
// *
//  *
// *
//  *

// �Է� 3
// * *
//  *
// * *
//  *
// * *
//  *

// �Է� 4
// * *
//  * *
// * *
//  * *
// * *
//  * *
// * *
//  * *

// ���� �Է� * 2
// Ȧ���� ���� ¦���� �Ʒ�