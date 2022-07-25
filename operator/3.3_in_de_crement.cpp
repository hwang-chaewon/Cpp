#include <iostream>

using namespace std;

int add(int a, int b) {
	return a + b;
}
int main() {

	int x = 5;
	int y = ++x;//증감시킴 & 바로 반영헤서 사용
	cout << x << endl;//x도 같이 증가됨을 알 수 있다. 연동 시스템인 듯하다
	int z = x--;//먼저 사용한 다음에 증감시킴
	cout << y << endl;
	cout << z << endl;

	int k = 1;
	//이 결과는 컴파일러마다 다르다. 3이 나오는 경우도 있고 4가 나오는 경우도 있음
	//그러니까 이렇게 코딩하지 마라.....
	int v = add(k, k++);
	cout << v << endl;
	return 0;
}