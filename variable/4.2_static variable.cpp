#include <iostream>
#include "4.2_Const.h"

using namespace std;

void doSome();

int main() {
	
	//int a=1�� ��: 2,2,2
	//static int a=1�� ��: 2,3,4
	doSome();
	doSome();
	doSome();
	//Const.h���� ����� �ʱ�ȭ�� ���� ���� ���: main������ test������ �ּҰ� �ٸ���.
	//Const.h������ ���� �ϰ� Const.cpp���� ����� �ʱ�ȭ�� ���� ���� ���: �ּҰ� ����
	cout << "In main.cpp: " << Const::pi <<"  �ּ�: " <<&Const::pi << endl;

	return 0;
}