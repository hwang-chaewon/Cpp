#include <iostream>

using namespace std;

int val = 3;

int main() {
	cout << val << endl;
	int val = 1;
	//����� {}���� ������ ���� ������ ��µ�
	cout << val << endl;
	//���� ������ ����ϰ� ���� ���: ���� ���� ������ :: ����
	cout << ::val << endl;
	return 0;
}