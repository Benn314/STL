// �ַ����滻
//#include <iostream>
//using namespace std;
//
//void test02()
//{
//	//�滻
//	string str1 = "abcdefgde";
//	str1.replace(4, 3, "1111");
//
//	cout << "str1 = " << str1 << endl; // abcd1111de
//}
//
//int main() {
//	test02();
//	return 0;
//}




//set�ܷ���[]ʹ������Ԫ�� // ���ǲ���
#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s;
	s.insert(3);
	s.insert(1);
	s.insert(2);
	cout << * s.begin();
	return 0;
}

////�鿴string��ʼֵ
//#include <iostream>
//using namespace std;
//
//int main() {
//	string s[10][10];
//	s[5][6] = "-";
//	s[9][9] = "*";
//	cout << s[5][5] << s[5][6] << s[9][8]<< s[9][9]; // -*  ֤��Ĭ�ϳ�ʼ���ǿմ�
//	return 0;
//}


//// �ַ����滻
//#include <iostream>
//using namespace std;
//
//void test02()
//{
//	//�滻
//	string str1 = "abcdefgde";
//	str1.replace(4, 3, "1111");
//
//	cout << "str1 = " << str1 << endl;
//}
//
//int main() {
//	test02();
//	return 0;
//}



// ���vector�ܷ���[]����Ԫ��
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	vector<int> v1; //�޲ι���
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << v1[0] << " " << v1[1] << " " << v1[9];
//	return 0;
//}
//���ۣ����ԣ������ȥ�������飬�����ǲ��������飬����ͨ��[]��������Ԫ��



//#include <iostream>
//#include <vector>
//using namespace std;
//
//void printVector(vector<int>& v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////�����ɾ��
//void test01()
//{
//	vector<int> v1;
//	//β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	v1.push_back('a');
//	v1.push_back('I');
//	v1.push_back('II');
//	printVector(v1);
//
//	////βɾ
//	//v1.pop_back();
//	//printVector(v1);
//	////����
//	//v1.insert(v1.begin(), 100);
//	//printVector(v1);
//
//	//v1.insert(v1.begin(), 2, 1000);
//	//printVector(v1);
//
//	////ɾ��
//	//v1.erase(v1.begin());
//	//printVector(v1);
//
//	////���
//	//v1.erase(v1.begin(), v1.end());
//	//v1.clear();
//	//printVector(v1);
//}
//
//int main() {
//
//	test01(); // 10 20 30 40 50 97 73 18761
//
//	system("pause");
//
//	return 0;
//}