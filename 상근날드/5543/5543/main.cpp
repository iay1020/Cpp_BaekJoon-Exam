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

// �ܹ���, ���Ḧ ��� ��Ʈ ���� �� �հ迡 - 50��
// �ܹ��ſ� ������ ������ �־����� �� ���� �� ��Ʈ �޴� ���
// �Է� 5�� �ܹ��� 3�� ���� 2�� ���� �Է�
// ������ 100�̻� 2000����

