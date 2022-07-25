#include <iostream>
using namespace std;
int main() {

	/*단항 연산자*/
	int x = 1;
	//-x를 쓸 때 붙여 써야 한다
	int y = -x;

	/*이항 연산자*/
	int z = x % y;
	cout <<"몫: " << x / y << " 나머지: " << z << endl;
	//둘 중에 하나만 실수면 결과가 실수로 나온다.
	cout << "몫: " << 7.0 / 4 << endl;
	//나머지 연산의 부호: 왼쪽에 있는 숫자의 부호에 맞춤
	cout << " 나머지: " << -5%2 << endl;
	return 0;
}