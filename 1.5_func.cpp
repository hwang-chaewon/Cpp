#include <iostream>

using namespace std; 

int addTwoNumbers(int n_1, int n_2) {
	int sum = n_1 + n_2;
	return sum;
}

void printHello() {
	cout << "Hello";
}

void printHelloWorld() {
	printHello();//�Լ��� �Լ��� �θ� �� �ִ�
	cout << "world!" << endl;

	cout << "this should be printed!" << endl;

	//void���� return���� ���û���. �ٸ� return�� �����Ϸ����� �� �� �Է��߾�~�̰� ���ϴ� ���̹Ƿ� �ڿ� ������ ���� �� �� ��
	return;

	cout << "this should be not printed.." << endl;
}

int main() {

	cout << addTwoNumbers(1,2) << endl;
	printHelloWorld();

	return 0;
}