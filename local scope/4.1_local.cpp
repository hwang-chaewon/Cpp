#include <iostream>
int main() {
	using namespace std;

	//scope: 이 apple은 {}안에서만 사용 가능
	//duration: 이 순간 메모리에서 5를 복사해 넣을 공간을 OS로부터 받아옴
	int apple=5;
	cout << apple << endl;
	{
		//새로 선언하지 않고 바깥에 있는 것을 사용
		apple = 1; 
		cout << apple << endl;
	}
	//바깥에 있는 더 큰 {}에서는 안에 있는 {}를 볼 수 있으므로 apple이 밖에서도 1로 바뀐다
	//마치 그 수학영화 플랫랜드 같다. 더 큰 차원에서는 안을 볼 수 있지만 안에서는 밖을 볼 수 없다.
	cout << apple << endl;

	{
		//{}안에서 새로 선언
		//{}안에 여행간 사람은 돌아올 수 있지만(변해서 돌아온다), {}안에서 태어난 사람은 {}안에서 죽어야 한다.
		int apple = 3;
		cout << apple << endl;
	}
	cout << apple << endl;

	return 0;
}
//{}를 벗어나는 순간 apple은 볼 수 없다. 즉 메모리가 반납되었다.
//apple=3; <--오류