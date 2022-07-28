#include <iostream>

using namespace std;

int main() {

	/*bool onSale = true;
	int price;
	if (onSale)
		price = 10;
	else
		price = 100;
	cout << price << endl;*/

	//그런데 만약 위의 예제에서 price를 const int price라고 하고 싶다면?
	//이때 conditional operator가 유용히 쓰인다.
	bool onSale = true;
	const int price = (onSale == true) ? 10 : 100;
	cout << price << endl;

	return 0;
}