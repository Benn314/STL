// �ַ����滻
#include <iostream>
using namespace std;

void test02()
{
	//�滻
	string str1 = "abcdefgde";
	str1.replace(4, 3, "1111");

	cout << "str1 = " << str1 << endl;
}

int main() {
	test02();
	return 0;
}
