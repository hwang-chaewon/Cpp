#include <iostream>
#include <limits>

int main() {
	using namespace std;

	//C-style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	//C++-style casting
	cout << char(65) << endl;
	cout << int('A') << endl;

	//앞의 2가지 방법은 강제로 변환한다는 느낌이 강함.
	//이 경우 fundamental type간에 변환한다는 느낌이 있음
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	//static-cast를 해도 변수에 저장된 값이 바뀌지는 않는다
	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;

	//버퍼
	char c1;
	cin >> c1;//여기서 abc를 입력한다면
	cout << c1 << " " << static_cast<int>(c1) << endl;//여기서는 a만 나오고, 나머지는 버퍼에 둔다.
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;//여기서는 다음 것인 b가 나올 것이다.
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;
	//만약 처음에 abc를 입력했는데 abc문자 3개를 넘어서게 또 입력받으면 어떻게 될까?
	//예상: 새로운 입력을 받으려고 할 것이다.
	//예상이 맞았다
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	/*범위*/
	cout << sizeof(char) << endl;
	//casting해야 하는 이유: 모든 아스키 문자가 화면에 출력할 수 있는 건 아니므로
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl;

	/*escape sequence*/
	//한 글자로 취급
	cout << int('\n') << endl;
	/*endl과 \n의 기능이 어떻게 다를까 ?*/
	//\n은 줄바꿈에 불과함. 
	//endl은 줄바꿈과 동시에 cout버퍼에 있는 내용들을 화면에 다 출력하라는 의미. 출력하고 줄을 바꿔라. 라는 의미
	cout << "I hate loud\t people" << endl;
	// " 등을 기능으로 사용하는 게 아니라 출력하고 싶으면 escape문자를 사용한다.
	// \를 출력을 원하는 문자 앞에 붙이면 된다.
	cout << "I really hate \"loud\" people" << endl;
	//소리 문자: 시간이 오래 걸리는 프로그램을 돌릴 때 프로그램 마지막에 이걸 설정해놓으면 끝났음을 알 수 있다.
	cout <<  '\a' << endl;
	return 0;
}