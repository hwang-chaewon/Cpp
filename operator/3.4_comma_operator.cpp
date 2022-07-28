#include <iostream>

using namespace std;

int main() {

	int x = 3;
	int y = 10;
	//comma operator의 역할: 앞에 것부터 차례대로 연산하고, 마지막 것을 변수에 대입해준다
	//잘 안 쓰이지만, 반복문에서는 꽤 쓰인다.
	int z = (++x, ++y);
	/*
	다음 세 문장과 동일한 효과를 가진다.
	++x;
	++y;
	int z=y
	*/
	cout << x << " " << y << " " << z << endl;

	int a = 1, b = 10; //여기 comma는 단순 구분 역할
	int c;
	//,가 =보다 연산 우선순위가 낮기 때문에, 이 경우 c=a 가 먼저 연산되어, c는 10이 아닌 1이 나온다
	c = a, b;
	cout << c << endl;

	return 0;
}