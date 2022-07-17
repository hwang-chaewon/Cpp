#include <iostream>
int main() {
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl;//3

	int y = x;
	std::cout << y << std::endl;//3

	/*Q.x + y는 L - value일까 R - value일까 ?
	A. (내 생각)R-value. 주소가 아니라 값을 나타내므로
	A. R-value가 맞다.*/
	std::cout << x + y << std::endl;//6
	//std::cout <<&(x + y) << std::endl;
		//실제로 (x+y)의 주소를 보려고 했더니 <'&' requires l-value>라는 오류메세지가 떴다.


	std::cout << x<< std::endl;//3

	//강의에서와 다르게 실행이 안 된다. 버전이 달라지며 이제는 initialization없이 진행하는 것을 허용하지 않는 듯하다.
	/*int z;
	std::cout << z << std::endl;*/
	return 0;
}