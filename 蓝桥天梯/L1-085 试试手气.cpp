//#include <iostream>
////#include <vector>
//using namespace std;
//
//int main() {
//    //vector<int> v;
//    int arr[6], N, array[6], flag = 1;
//    for (int i = 0; i < 6; i++) {
//        cin >> arr[i];
//        //v.push_back(arr[i]);
//    }
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        
//        for (int j = 0; j < 6; j++)
//        {
//            if (i == 0) {
//                array[j] = 6;
//                if (array[j] == arr[j]) {
//                    array[j] = 5;
//                    continue;
//                }
//                continue;
//            }
//            array[j]--;
//            if (array[j] == arr[j] && i != 0) {
//                array[j]--;
//            }
//        }
//    }
//
//    for (int k = 0; k < 6; k++) {
//        if (flag==1) {
//            cout << array[k];
//            flag = 0;
//            continue;
//        }
//        cout << " " << array[k];
//    }
//
//
//    return 0;
//}