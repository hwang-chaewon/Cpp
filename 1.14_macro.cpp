#include <iostream>

using namespace std;

//�ڵ忡�� MY_NUMBER�� ������ 9�� �ٲ� �ش�
#define MY_NUMBER 9
//�ڵ忡�� MY_WORD�� ������ Hello�� �ٲ� �ش�
#define MY_WORD "Hello"
//�̷� ��ĵ� ����. a, b�� ��� ��ȣ�� �δ� ������ MAX(1+3,5)�����ε� ����� �� �ֱ� ������ a�� ���ڸ� ���� �� �ƴ϶� �ĵ� �� �� �����Ƿ�
#define MAX(a,b) (((a)>(b))?(a):(b))

#define LIKE_APPLE

int main() {

	cout << MY_NUMBER << endl;
	cout << MY_WORD << endl;
	cout << MAX(1+3,5) << endl;

//LIKE_APPLE�� ���ǰ� �Ǿ� �ִٸ�
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#endif

//LIKE_APPLE�� ���ǰ� �� �Ǿ� �ִٸ�
#ifndef LIKE_APPLE
	cout << "Orange" << endl;
#endif

//�Ǵ� ���ǹ����� �Ѳ����� �ϱ�
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif

	return 0;
}