#include <iostream>
using namespace std;
int main() {

	/*���� ������*/
	int x = 1;
	//-x�� �� �� �ٿ� ��� �Ѵ�
	int y = -x;

	/*���� ������*/
	int z = x % y;
	cout <<"��: " << x / y << " ������: " << z << endl;
	//�� �߿� �ϳ��� �Ǽ��� ����� �Ǽ��� ���´�.
	cout << "��: " << 7.0 / 4 << endl;
	//������ ������ ��ȣ: ���ʿ� �ִ� ������ ��ȣ�� ����
	cout << " ������: " << -5%2 << endl;
	return 0;
}