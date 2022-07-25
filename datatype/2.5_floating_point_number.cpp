#include <iostream>
#include <iomanip>//입출력을 조작하는 라이브러리
#include <limits>
#include <cmath>

int main() {
	using namespace std;

	float f(3.141592f);
	double d(3.141592);
	long double ld(3.141592);

	/*범위*/
	cout << "size" << endl;
	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;
	cout << "max" << endl;
	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;
	//min: 표현할 수 있는 가장 작은 숫자의 절댓값. 따라서 양수로 나옴
	cout << "min" << endl;
	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;
	//그래서 범위를 볼 때는 lowest로 봐야 함
	cout << "lowest" << endl;
	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	/*계산*/
	//iomanip을 통해 몇 자리수까지 출력할 것인지 조절할 수 있다.
	//앞으로 출력될 것들에 대한 설정이다.
	cout << std::setprecision(9)<<endl;
	cout << 1.0 / 3.0 << endl;

	/*유효숫자(significant digit)*/
	float ff(123456789.0f);
	cout << ff << endl;

	cout << std::setprecision(17) << endl;
	double dd(0.1);
	cout << dd << endl;

	double d1(1.0);
	double d2(0.1+0.1+0.1+0.1+0.1+ 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	cout << d1 << endl;
	cout << d2 << endl;

	/*0으로 나누기*/
	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;
	cout << posinf << endl;
	cout << neginf << endl;
	cout << nan << endl;

	//이렇게 inf나 nan이 나오는지 안 나오는지 미리 확인을 하면 좋을 것.
	//확인하는 방법: isnan, isinf.  1이 나오면 true인 것
	cout << posinf << " :is it nan? "<<std::isnan(posinf) << endl;
	cout << neginf << " :is it nan?  " << std::isnan(neginf) << endl;
	cout << nan << " :is it nan? " << std::isnan(nan) << endl;
	cout << posinf << " :is it inf? " << std::isinf(posinf) << endl;
	cout << posinf << " :is it inf? " << std::isinf(neginf) << endl;
	cout << posinf << " :is it inf? " << std::isinf(nan) << endl;
	return 0;
}