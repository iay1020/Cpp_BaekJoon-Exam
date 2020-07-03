#include <iostream>
using namespace std;

int main()
{
	int avg = 0;
	for (int i = 0, n; i < 5; i++)
	{
		cin >> n;
		if (n < 40) n = 40;
		avg += n;

	}
	cout << avg / 5;

	return 0;
}

// 40점 이상은 그 성적 그대로
// 40점 미만은 보충학습 후 40점
// 학생 5명 점수의 평균을 구해라
// 입력 5개
// 점수 0이상 100이하 5의 배수 항상 정수
