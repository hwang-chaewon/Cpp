#include <iostream>

using namespace std;

int add(int a, int b) {
	return a + b;
}
int main() {

	int x = 5;
	int y = ++x;//������Ŵ & �ٷ� �ݿ��켭 ���
	cout << x << endl;//x�� ���� �������� �� �� �ִ�. ���� �ý����� ���ϴ�
	int z = x--;//���� ����� ������ ������Ŵ
	cout << y << endl;
	cout << z << endl;

	int k = 1;
	//�� ����� �����Ϸ����� �ٸ���. 3�� ������ ��쵵 �ְ� 4�� ������ ��쵵 ����
	//�׷��ϱ� �̷��� �ڵ����� ����.....
	int v = add(k, k++);
	cout << v << endl;
	return 0;
}