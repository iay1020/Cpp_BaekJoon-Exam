#include<iostream>
using namespace std;
int main()
{
	short n, x;
	n = x = 0;
	cin >> n;
	for (short i = 0; i < n * 2; ++i)
	{
		if (i >= n) x--;
		else x++;

		for (short j = 0; j < x; ++j)
			cout << "*";
		cout << endl;

	}

	return 0;
}

// 2 x N - 1��° �ٱ��� ���ʴ�� �� ���
// �Է� 3�̶��
// *
// **
// ***
// **
// *