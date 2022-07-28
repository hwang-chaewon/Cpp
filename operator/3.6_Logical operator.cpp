#include <iostream>

using namespace std;

int main() {
	//Logical AND
	//�������� �켱���� ������ ���� ������ ���µ� ������ ���� ������ ()�� ������
	cout << (true && false) << endl;

	//Logical OR
	cout << (true || false) << endl;

	//�Ǽ��ϱ� ���� ���: �������� �켱���� ����
	int x = 5;
	int y = 7;
	//!(x==y)�� �ƴ϶�, ((!x)==y) �� �ȴ�.
	if (!x == y)
		cout << "x does not equal y" << endl;
	else 
		cout << "eq" << endl;

	//short circuit evaluation
	x = 2;
	y = 2;
	//AND�� ���ʺ��� ����ϸ鼭, ������ false�� �ǹ����� �������� ��� �õ����� ���Ѵ�.
	if(x==1&&y++==2){ }
	cout << y << endl;

	//De Morgan's Law: �Ʒ� 2���� �ٸ���
	//!(x && y) �� ((!x) || (!y))�� ���� !(x || y) �� ((!x) && (!y))�� ����
	cout << !(x && y) << endl;
	cout <<((!x) && (!y)) << endl;

	//XOR: C++���� XOR�����ڴ� ����
	//XOR��Ȳ�� (x != y) ������ �����Ѵ�

	//Logical Operator�� �켱����: ||�� &&
	// ||�� &&�߿��� &&�� ������ ���Ƽ� ���� ����
	cout << (true || false && false) << endl;
	cout << ((true || false) && false) << endl;

	//HW
	cout << ((true&&true)||false) << endl;//T
	cout << ((false && true) || false) << endl;//F
	cout << ((false && true) || false||true) << endl;//T
	cout << (((14>13) && (2>1)) || (9>1)) << endl;//T
	cout << !((2314123>2) || (123123>2387)) << endl;//F


	return 0;
}