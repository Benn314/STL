//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int i;
//    int arr[10];
//    for (i = 0; i < 10; i++) {
//        arr[i] = 2021;//��¼0-9��10�ſ�Ƭ����������ʼ����2021��
//    }
//    for (i = 1;; i++) {//���ڲ�֪����i�ı߽�ֵ��ʡ�ԣ���һֱִ��
//        int x = i;    //��x�����ÿһ��i��ֵ����ֹiֵ�ĸı�
//        while (x) { //x==0ʱ��whileѭ���˳�
//            if (arr[x % 10] == 0) {//����һ�ſ�Ƭ������ʣ��Ϊ0�ŵ�ʱ�����ǰһ��i��ֵ��Ҳ����i-1�����˳�
//                cout << i - 1;
//                exit(0); //�൱��������mainֱ��return 0�� �������ѧϰһ��
//            }
//            arr[x % 10]--;  //ÿһ�ſ�Ƭ��������1
//            x /= 10;
//        }
//    }
//    return 0;
//}
//
////#include <iostream>
////#include <string>
////using namespace std;
////int main()
////{
////	// ���ڴ��������Ĵ���
////	// ����Ͱ�������ÿ��Ͱ������Ϊ0����������
////	int arr[10];
////	for (int i = 0; i < 10; i++) {
////		arr[i] = 3;//��¼0-9��10�ſ�Ƭ����������ʼ����2021��
////	}
////	int start = 1,flag=0;
////	while (1) {
////		string temp = to_string(start);
////		for (int i = 0; i < temp.length(); i++)
////		{
////			for (int j = 0; j < 10; j++)
////			{
////				if (stoi(to_string(temp[i])) == j) {
////					arr[j]--;
////					if (arr[j] <= 0) {
////						flag = 1;
////						break;
////					}
////				}
////			}
////			if (flag==1) {
////				break;
////			}
////		}
////		if (flag==1) {
////			break;
////		}
////		start++;
////	}
////	cout << start;
////	return 0;
////}