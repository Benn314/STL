//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int i;
//    int arr[10];
//    for (i = 0; i < 10; i++) {
//        arr[i] = 2021;//记录0-9这10张卡片的数量，开始都是2021张
//    }
//    for (i = 1;; i++) {//由于不知道到i的边界值，省略，会一直执行
//        int x = i;    //用x来存放每一个i的值，防止i值的改变
//        while (x) { //x==0时，while循环退出
//            if (arr[x % 10] == 0) {//当有一张卡片的数量剩余为0张的时候，输出前一个i的值，也就是i-1，并退出
//                cout << i - 1;
//                exit(0); //相当于主程序main直接return 0了 这个可以学习一下
//            }
//            arr[x % 10]--;  //每一张卡片数量减少1
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
////	// 请在此输入您的代码
////	// 利用桶排序，如果每个桶的数量为0，则程序结束
////	int arr[10];
////	for (int i = 0; i < 10; i++) {
////		arr[i] = 3;//记录0-9这10张卡片的数量，开始都是2021张
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