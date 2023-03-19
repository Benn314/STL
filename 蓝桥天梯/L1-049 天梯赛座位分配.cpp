//// 得20分
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int n, sum = 0, cnt = 1, num[110] = { 0 }, id_school[100001] = { 0 };
//    cin >> n;
//    vector<vector<int>> v(n + 1);
//    for (int i = 1; i <= n; i++)
//        cin >> num[i];
//    while (1) {
//        bool flag = true;
//        for (int i = 1; i < v.size(); i++) {
//            if (v[i].size() < num[i] * 10) {
//                if (id_school[cnt - 1] != i) {
//                    id_school[cnt] = i;
//                    v[i].push_back(cnt);
//                    cnt++;
//                }
//                else { 
//                    id_school[cnt + 1] = i;
//                    v[i].push_back(cnt + 1);
//                    cnt = cnt + 2;
//                }
//                flag = false;
//            }
//        }
//        if (flag) break;
//    }
//    for (int i = 1; i < v.size(); i++) {
//        cout << "#" << i << endl;
//        for (int j = 0; j < v[i].size(); j++) {
//            if (j != 0 && j % 10 != 0) cout << " ";
//            if (j != 0 && j % 10 == 0) cout << endl;
//            cout << v[i][j];
//        }
//        cout << endl;
//    }
//    return 0;
//}
//
//
//// 得3分
////#include <iostream>
////#include <algorithm>
////#include <vector>
////using namespace std;
////
////int main() {
////	/*
////		规律：横的+学校数 纵的＋学校数*10
////	*/
////	int N;//参赛的高校数
////	int I, count = 1, flag = 1,count2=0;
////	int arr[1001]={0};
////	int tmpArr[1001]={0};
////	cin >> N;
////	for (int i = 0; i < N; i++)
////	{
////		cin >> I;
////		arr[i]=I;
////		tmpArr[i]=I;
////	}
////	sort(tmpArr, tmpArr + 1001);
////	for (int i = 0; i < N; i++)
////	{
////		cout << "#" << i + 1 << endl;
////		int temp = i + 1;
////		int cnt = N;
////		count2 = 0;
////		count = 1;
////		for (int j = 0; j < arr[i]; j++)
////		{
////			for (int k = 0; k < 10; k++)
////			{
////				if(count>tmpArr[1001-N + count2]&&cnt>1){ // 仅限出现的第一行的情况 下面行如果学号前面有学号 不能再输出--
////					while (tmpArr[1001 - N + count2]== tmpArr[1001 - N +count2 +1 ]) {
////						count2++;
////						cnt--;
////					}
////					count2++;
////					cnt--;
////				}
////				if (flag == 0) {
////					cout << " ";
////				}
////				cout << temp;
////
////				if (cnt == 1) {
////					temp += 2;
////				}
////				else {
////					temp += cnt;
////				}
////				
////				flag = 0;
////				if (k == 9) {
////					cout << endl;
////					count++;
////					flag = 1;
////				}
////			}
////		}
////	}
////	return 0;
////}