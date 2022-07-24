#include <iostream>

void my_func() {

}
int main() {
	int i = 123;
	float f = 123.456f;

	/*void vval;*/
	void* vval;

	vval = (void*)&i;
	vval = (void*)&f;

	return 0;
}