#include<iostream>
using namespace std;
int main()
{
	short total = 0;
	for (short i = 0, min = 2001, n; i < 5; ++i)
	{
		cin >> n;
		if (min > n) min = n;

		if (i == 2 || i == 4)
		{
			total += min;
			min = 2001;
		}

	}
	cout << total - 50;

	return 0;
}

// 햄버거, 음료를 골라 세트 구매 시 합계에 - 50원
// 햄버거와 음료의 가격이 주어졌을 때 가장 싼 세트 메뉴 출력
// 입력 5개 햄버거 3종 음료 2종 가격 입력
// 가격은 100이상 2000이하

