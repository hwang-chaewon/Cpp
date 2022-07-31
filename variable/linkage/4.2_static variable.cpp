#include <iostream>
#include "4.2_Const.h"

using namespace std;

void doSome();

int main() {
	
	//int a=1일 때: 2,2,2
	//static int a=1일 때: 2,3,4
	doSome();
	doSome();
	doSome();
	//Const.h에서 선언과 초기화를 같이 했을 경우: main에서와 test에서의 주소가 다르다.
	//Const.h에서는 선언만 하고 Const.cpp에서 선언과 초기화를 같이 했을 경우: 주소가 같다
	cout << "In main.cpp: " << Const::pi <<"  주소: " <<&Const::pi << endl;

	return 0;
}
