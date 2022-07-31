#include <iostream>

using namespace std;

namespace a {
	int var(10);
}
namespace b {
	int var(20);
}

int main() {

	//ambiguous
	/*using namespace a;
	using namespace b;
	cout << var << endl;*/
	{
		using namespace a;
		cout << var << endl; 
	}
	{
		using namespace a;
		cout << var << endl; 
	}

	return 0;
}