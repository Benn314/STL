//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int B(int left, int right, int target, int arr[]) {
//	if (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] == target) {
//			return mid;
//		}
//		if (arr[mid] > target) {
//			return B(left, mid - 1, target, arr);
//		}
//		if (arr[mid] < target) {
//			return B(mid + 1, right, target, arr);
//		}
//	}
//	else {
//		return -1;
//	}
//}
//
//int main() {
//	//二分查找
//	int target;
//	cin >> target;
//	int arr[8] = { 2,0,0,5,2,0,3,7 };
//	sort(arr, arr + 8);
//	int result = B(0, 7, target, arr);
//	if (result == -1) {
//		cout << "没有";
//	}
//	else {
//		cout << result;
//	}
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////#include <iostream>
////#include <algorithm>
////using namespace std;
////
////int B(int left,int right,int target,int arr[]) {
////	if (left <= right) {
////		int mid = (left + right) / 2;
////		if (target == arr[mid]) {
////			return mid;
////		}
////		else if (target > arr[mid]) {
////			B(mid + 1, right, target, arr);
////		}
////		else if (target < arr[mid]) {
////			B(left, mid + 1, target, arr);
////		}
////	}
////	else {
////		return -1;
////
////	}
////	
////}
////
////int main() {
////	// 二分查找
////	int target;
////	cin >> target;
////	int arr[8] = { 2,0,0,5,2,0,3,7 };
////	sort(arr, arr + 8);
////	/*for (int i = 0; i < 8; i++)
////	{
////		cout << arr[i] << " ";
////	}*/
////	int result = B(0, 7, target, arr);
////	if (result == -1) {
////		cout << "没有找到";
////	}
////	else {
////		cout << result;
////	}
////
////	return 0;
////}