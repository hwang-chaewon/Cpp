#include <iostream>
#include "4.2_Const.h"

using namespace std;

extern int a = 1;

void doSome() {
	++a;
	cout << a << endl;
	cout << "In text.cpp: " << Const::pi << "  аж╪р: " << &Const::pi << endl;
}