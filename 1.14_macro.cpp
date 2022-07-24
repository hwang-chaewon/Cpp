#include <iostream>

using namespace std;

//코드에서 MY_NUMBER를 만나면 9로 바꿔 준다
#define MY_NUMBER 9
//코드에서 MY_WORD를 만나면 Hello로 바꿔 준다
#define MY_WORD "Hello"
//이런 방식도 가능. a, b를 모두 괄호로 싸는 이유는 MAX(1+3,5)식으로도 사용할 수 있기 때문에 a에 숫자만 들어가는 게 아니라 식도 들어갈 수 있으므로
#define MAX(a,b) (((a)>(b))?(a):(b))

#define LIKE_APPLE

int main() {

	cout << MY_NUMBER << endl;
	cout << MY_WORD << endl;
	cout << MAX(1+3,5) << endl;

//LIKE_APPLE이 정의가 되어 있다면
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#endif

//LIKE_APPLE이 정의가 안 되어 있다면
#ifndef LIKE_APPLE
	cout << "Orange" << endl;
#endif

//또는 조건문으로 한꺼번에 하기
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif

	return 0;
}