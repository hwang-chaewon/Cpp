#include <iostream>
#include "2.9_const.h"

using namespace std;

//�Լ��� �Ű������� �޾Ƽ� �ȿ��� ����� �� ������ �ʴ� ��찡 ��κ��̹Ƿ� const�� ����� ������ �� ����
void printNumber(const int my_num) {
	cout << my_num << endl;
}
int main() {

	/*������ ���*/
	int n = 123;
	int price = n * 30;
	//�׷��� n�� ����� ���� ���ڴ�!-->const
	

	//const�� ��� ���̵��� �����ϴ�
	//������ Ÿ�� ���: �������Ҷ� �̹� �����Ǵ� ��
	const double gravity{ 9.8 };
	double const gravity{ 9.8 };
	constexpr double gravity{ 9.8 };

	printNumber(5);

	/*������ ��� �ʱ�ȭ*/
	//������ �ٲ� �� �ְ����� const�� �ٲ��� ���� ���̴�.
	int num;
	cin >> num;
	//��Ÿ�� ���: special_num�� ����ڰ� �Է��� �� ������ �� �� ���� ��Ÿ�ӿ��� ������ �� ��
	const int special_num(num);

	/*header������ ��� ���*/
	double r;
	cin >> r;
	double circum = 2.0 * r * constant::pi;

	return 0;
}