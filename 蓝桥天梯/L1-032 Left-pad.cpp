//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	/*
//		��������
//		���鳤�ȱ�����ֵС�������ǰ��ȡ �����ͷ��ʼ�������
//	*/
//	int N;
//	string c;
//	cin >> N;
//	cin >> c;
//	//cin.get(); // �� getchar();Ҳ��
//	//getchar(); //�����char c�Ļ�
//	string s;
//	getline(cin, s);
//
//	if (N <= s.length()) {
//		//cout<<s.substr(s.length() - N, s.length()); // �ұ��ǿ����� ����ֱ�ӵ�s.length()
//		cout << s.substr(s.length() - N); //���ɳɹ� ��Ϊsubstr������������begin��end ��ʵ��pos��n Ȼ��n�Ļ���дĬ���ǵ����һ��λ��
//	}
//	else {
//		for (int i = 0; i < N-s.length(); i++)
//		{
//			cout << c;
//		}
//		cout << s;
//	}
//
//
//	return 0;
//}