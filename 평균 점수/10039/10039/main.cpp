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

// 40�� �̻��� �� ���� �״��
// 40�� �̸��� �����н� �� 40��
// �л� 5�� ������ ����� ���ض�
// �Է� 5��
// ���� 0�̻� 100���� 5�� ��� �׻� ����
