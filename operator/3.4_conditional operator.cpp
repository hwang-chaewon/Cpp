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

	//�׷��� ���� ���� �������� price�� const int price��� �ϰ� �ʹٸ�?
	//�̶� conditional operator�� ������ ���δ�.
	bool onSale = true;
	const int price = (onSale == true) ? 10 : 100;
	cout << price << endl;

	return 0;
}