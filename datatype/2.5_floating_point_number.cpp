#include <iostream>
#include <iomanip>//������� �����ϴ� ���̺귯��
#include <limits>
#include <cmath>

int main() {
	using namespace std;

	float f(3.141592f);
	double d(3.141592);
	long double ld(3.141592);

	/*����*/
	cout << "size" << endl;
	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;
	cout << "max" << endl;
	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;
	//min: ǥ���� �� �ִ� ���� ���� ������ ����. ���� ����� ����
	cout << "min" << endl;
	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;
	//�׷��� ������ �� ���� lowest�� ���� ��
	cout << "lowest" << endl;
	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	/*���*/
	//iomanip�� ���� �� �ڸ������� ����� ������ ������ �� �ִ�.
	//������ ��µ� �͵鿡 ���� �����̴�.
	cout << std::setprecision(9)<<endl;
	cout << 1.0 / 3.0 << endl;

	/*��ȿ����(significant digit)*/
	float ff(123456789.0f);
	cout << ff << endl;

	cout << std::setprecision(17) << endl;
	double dd(0.1);
	cout << dd << endl;

	double d1(1.0);
	double d2(0.1+0.1+0.1+0.1+0.1+ 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	cout << d1 << endl;
	cout << d2 << endl;

	/*0���� ������*/
	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;
	cout << posinf << endl;
	cout << neginf << endl;
	cout << nan << endl;

	//�̷��� inf�� nan�� �������� �� �������� �̸� Ȯ���� �ϸ� ���� ��.
	//Ȯ���ϴ� ���: isnan, isinf.  1�� ������ true�� ��
	cout << posinf << " :is it nan? "<<std::isnan(posinf) << endl;
	cout << neginf << " :is it nan?  " << std::isnan(neginf) << endl;
	cout << nan << " :is it nan? " << std::isnan(nan) << endl;
	cout << posinf << " :is it inf? " << std::isinf(posinf) << endl;
	cout << posinf << " :is it inf? " << std::isinf(neginf) << endl;
	cout << posinf << " :is it inf? " << std::isinf(nan) << endl;
	return 0;
}