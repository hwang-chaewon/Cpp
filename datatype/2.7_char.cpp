#include <iostream>
#include <limits>

int main() {
	using namespace std;

	//C-style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	//C++-style casting
	cout << char(65) << endl;
	cout << int('A') << endl;

	//���� 2���� ����� ������ ��ȯ�Ѵٴ� ������ ����.
	//�� ��� fundamental type���� ��ȯ�Ѵٴ� ������ ����
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	//static-cast�� �ص� ������ ����� ���� �ٲ����� �ʴ´�
	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;

	//����
	char c1;
	cin >> c1;//���⼭ abc�� �Է��Ѵٸ�
	cout << c1 << " " << static_cast<int>(c1) << endl;//���⼭�� a�� ������, �������� ���ۿ� �д�.
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;//���⼭�� ���� ���� b�� ���� ���̴�.
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;
	//���� ó���� abc�� �Է��ߴµ� abc���� 3���� �Ѿ�� �� �Է¹����� ��� �ɱ�?
	//����: ���ο� �Է��� �������� �� ���̴�.
	//������ �¾Ҵ�
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	/*����*/
	cout << sizeof(char) << endl;
	//casting�ؾ� �ϴ� ����: ��� �ƽ�Ű ���ڰ� ȭ�鿡 ����� �� �ִ� �� �ƴϹǷ�
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl;

	/*escape sequence*/
	//�� ���ڷ� ���
	cout << int('\n') << endl;
	/*endl�� \n�� ����� ��� �ٸ��� ?*/
	//\n�� �ٹٲ޿� �Ұ���. 
	//endl�� �ٹٲް� ���ÿ� cout���ۿ� �ִ� ������� ȭ�鿡 �� ����϶�� �ǹ�. ����ϰ� ���� �ٲ��. ��� �ǹ�
	cout << "I hate loud\t people" << endl;
	// " ���� ������� ����ϴ� �� �ƴ϶� ����ϰ� ������ escape���ڸ� ����Ѵ�.
	// \�� ����� ���ϴ� ���� �տ� ���̸� �ȴ�.
	cout << "I really hate \"loud\" people" << endl;
	//�Ҹ� ����: �ð��� ���� �ɸ��� ���α׷��� ���� �� ���α׷� �������� �̰� �����س����� �������� �� �� �ִ�.
	cout <<  '\a' << endl;
	return 0;
}