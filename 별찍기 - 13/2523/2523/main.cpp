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

// 2 x N - 1번째 줄까지 차례대로 별 출력
// 입력 3이라면
// *
// **
// ***
// **
// *