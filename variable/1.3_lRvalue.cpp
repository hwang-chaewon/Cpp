#include <iostream>
int main() {
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl;//3

	int y = x;
	std::cout << y << std::endl;//3

	/*Q.x + y�� L - value�ϱ� R - value�ϱ� ?
	A. (�� ����)R-value. �ּҰ� �ƴ϶� ���� ��Ÿ���Ƿ�
	A. R-value�� �´�.*/
	std::cout << x + y << std::endl;//6
	//std::cout <<&(x + y) << std::endl;
		//������ (x+y)�� �ּҸ� ������ �ߴ��� <'&' requires l-value>��� �����޼����� ����.


	std::cout << x<< std::endl;//3

	//���ǿ����� �ٸ��� ������ �� �ȴ�. ������ �޶����� ������ initialization���� �����ϴ� ���� ������� �ʴ� ���ϴ�.
	/*int z;
	std::cout << z << std::endl;*/
	return 0;
}