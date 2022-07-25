#include <iostream>
#include "2.9_const.h"

using namespace std;

//함수의 매개변수를 받아서 안에서 사용할 때 변하지 않는 경우가 대부분이므로 const로 만들어 버리는 게 좋다
void printNumber(const int my_num) {
	cout << my_num << endl;
}
int main() {

	/*안좋은 방식*/
	int n = 123;
	int price = n * 30;
	//그래서 n을 상수로 만들어서 쓰겠다!-->const
	

	//const는 어디에 붙이든지 가능하다
	//컴파일 타임 상수: 컴파일할때 이미 결정되는 것
	const double gravity{ 9.8 };
	double const gravity{ 9.8 };
	constexpr double gravity{ 9.8 };

	printNumber(5);

	/*변수로 상수 초기화*/
	//변수는 바꿀 수 있겠지만 const는 바뀌지 않을 것이다.
	int num;
	cin >> num;
	//런타임 상수: special_num은 사용자가 입력을 할 때까지 알 수 없고 런타임에서 결정이 될 것
	const int special_num(num);

	/*header파일의 상수 사용*/
	double r;
	cin >> r;
	double circum = 2.0 * r * constant::pi;

	return 0;
}