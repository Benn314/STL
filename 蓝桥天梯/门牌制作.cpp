//#include <iostream>
//#include <string>
////#include <typeinfo>
//using namespace std;
//int main()
//{
//	// ���ڴ��������Ĵ���
//	// ����������֪ʶ�㣬stoiΪʲô�ò��� �̣�string��û�з������Բ��ҵ��ַ�����ĳ�ַ����ֵ����д������ش𣺲�û�У�
//	string str;
//	int count=0;
//	for (int i = 1; i < 2021; i++)
//	{
//		int tmp = i;
//		str = to_string(tmp);
//		for (int j = 0; j < str.length(); j++)
//		{
//			if (str[j] == '2') {
//				count++;
//			}
//			//if (stoi(to_string(str[j])) == '2') { //����дstoi(str[j])���У�������char����Ҫ����to_stringת��stringֱ����string(str[j])ǿ��ת��Ҳ����
//			//	count++;
//			//}
//			//cout << str[j]<<endl;
//			// �鿴�������������� typeid(str[j]).name()
//			//cout << typeid(str[j]).name() << endl; //char ���Բ���+ͷ�ļ� #include <typeinfo>
//		}
//	}
//	
//	cout << count;
//	return 0;
//}