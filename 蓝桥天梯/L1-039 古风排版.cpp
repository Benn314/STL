//// ѧϰһ�� vector��ά����Ҫ��ô�����ʹ��
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main() {
//    int n;
//    string s;
//    cin >> n;
//    getchar();
//    getline(cin, s);
//    int col = (s.length() - 1) / n + 1;
//    vector<vector<char> > v(n, vector<char>(col, ' '));
//    int index = 0;
//    for (int j = col - 1; j >= 0; j--) {
//        for (int i = 0; i < n; i++) {
//            if (index < s.length())
//                v[i][j] = s[index++];
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < col; j++)
//            cout << v[i][j];
//        cout << endl;
//    }
//    return 0;
//}
//
////#include <iostream>
////#include <string>
////using namespace std;
////
////int main() {
////	/*
////		��Ҫһ����ά���������
////	*/
////	int N; //ÿһ�е��ַ���
////	string s;
////	string arr[100][100];
////	cin >> N;
////	cin.get();
////	getline(cin, s);
////
////	// ��Ҫ֪���ӵڼ��п�ʼ���
////	int go = s.length() / N;
////	if (s.length() % N != 0) {
////		go++;
////	}
////	
////	int count = 0;
////	for (int i = go-1; i >= 0; i--)
////	{
////		for (int j = 0; j < N; j++)
////		{
////			//arr[j][i] = to_string(s[count++]); // ���ܼ���to_string
////			//cout << to_string(s[count++])<<" "; // ������to_string ��Ҫ��ͷ���¿�������
////			//cout << s[count++]<<" "; // ����ַ�
////			
////			// s�ĳ���С�ڵ���go*N ���� ��������Ҫ�ж�count�Ƿ����Լ����ٽ�ֵ ���ڵ�ʱ��Ҫ����ѭ��
////			if (count == s.length()) break;
////			arr[j][i] = s[count++];
////		}
////	}
////	// cout << endl << 'A'<<'b'; // ����ַ�����ֵ��С
////
////	for (int i = 0; i < N; i++)
////	{
////		for (int j = 0; j < go; j++)
////		{
////			if (arr[i][j] != "") {
////				cout << arr[i][j];
////			}
////			else{
////				cout << " ";
////			}
////		}
////		if (i != N - 1) {
////			cout << endl;
////		}
////	}
////
////	return 0;
////}