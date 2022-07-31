#include <iostream>
#include <typeinfo>

int main() {
	using namespace std;

	//typeid에 변수나 리터럴을 넣으면 어떤 데이터 타입인지 출력해줌
	cout << typeid(4.0).name() << endl;

	//numeric conversion
	int i = 300;
	char c = i;
	cout << c << endl;
	cout << static_cast<int>(c) << endl;
	//numeric conversion-unsigned
	cout << 5u - 10 << endl;//5u: unsigned 5라는 뜻

	return 0;
}