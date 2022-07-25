#include <iostream>

//연산순위를 따져보자
int main() {

	//1+2 >> (1+2)+3 >> (1+2+3)+4
	int r = 1 + 2 + 3 + 4;

	int a, b;
	int c = 5;
	//b=c >> a=b=c
	a = b = c;

	int t, w;
	//
	t /= --w + 5;

	int d = 0;
	//a||b and c||d >> (a || b) && (c || d)
	a || b && c || d;

	return 0;
}