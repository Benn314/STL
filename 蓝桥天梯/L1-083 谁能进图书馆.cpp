//#include <iostream>
//using namespace std;
//
//int main() {
//    int x1, x2, define, care;
//    string yes = "-Y", no = "-N";
//    cin >> define >> care >> x1 >> x2;
//    if (x1 < define && x2 < define) {
//        cout << x1 << no << " " << x2 << no<<endl;
//        cout << "zhang da zai lai ba";
//    }
//    else if (x1 >= define && x2 >= define) {
//        cout << x1 << yes << " " << x2 << yes<<endl;
//        cout << "huan ying ru guan";
//    }
//    else if ((x1 < define && x2 >= care) || (x2 < define && x1 >= care)) {
//        if (x1 > x2) {
//            cout << x1 << yes << " " << x2 << yes << endl;
//            cout << "qing 1 zhao gu hao 2";
//        }
//        else {
//            cout << x1 << yes << " " << x2 << yes << endl;
//            cout << "qing 2 zhao gu hao 1";
//        }
//    }
//    else if ((x1 < define && x2 < care) || (x2 < define && x1 < care)) {
//        if (x1 > x2) {
//            cout << x1 << yes << " " << x2 << no << endl;
//            cout << "1: huan ying ru guan";
//        }
//        else {
//            cout << x1 << no << " " << x2 << yes << endl;
//            cout << "2: huan ying ru guan";
//        }
//    }
//    return 0;
//}