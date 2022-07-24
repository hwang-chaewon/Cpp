#include <iostream>

namespace MySpace1 {
	int doAdd(int a, int b) {
		return a + b;
	}
	namespace InnerSpace {
		int doMul(int a, int b) {
			return a * b;
		}
	}
	int doSub(int a, int b) {
		return a - b;
	}
}

namespace MySpace2 {
	int doMul(int a, int b) {
		return a * b;
	}
}

using namespace std;

int main() {
	using namespace MySpace1::InnerSpace;
	cout << MySpace1::doAdd(3, 4) << endl;
	cout << doMul(2, 5) << endl;
	cout << MySpace2::doMul(8, 3) << endl;
	return 0;
}