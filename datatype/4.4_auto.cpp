#include <iostream>

auto add(int x, int y) ->double{
	return x + (double)y;
}

int main() {
	using namespace std;

	auto a = 123;
	auto d = 123.0;
	auto result = add(1, 2);

	return 0;
}