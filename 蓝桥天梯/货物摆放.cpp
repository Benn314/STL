//#include <iostream>
//#include <math.h>
//#include <vector>
//using namespace std;
//int main()
//{
//    // ���ڴ��������Ĵ���
//    long long num = 2021041820210418;
//    //��ʵΪʲô��������ȥ�룬��Ϊ����ȥ����򵥣�������ӡ��������Ƿ������ַ����ܶ��鶼����Ч�ģ�Ҳ���ǳ��ֲ���num���ӵ����ֳ���
//    //��������ļ���������巴�������ǵ�CPU���Ӹ�����
//    //�ã��򻯵�Ŀ�İ����ˣ���num��������~
//    //�����������Ȳ�֪��num�����ж������ӣ���������������һ��vector����������һ����ѹ��vector������
//    vector<long long> divisor;//��Ϊ����Ҳ������num�����������ǵ�������������Ϊlong long���͵�
//    //���ǿ�ʼ�����ӣ�ֻ��Ҫ�ҵ�num��ƽ�������ɣ���Ϊ����������ҵĻ������ҵ�֮ǰС��numƽ������i���õ�num�ж�Ӧ��i�Ľϴ�����ӣ�
//    //������ڽϴ���������ǿ���ͨ��ѭ�����j�õ�
//    for (long long i = 1; i <= sqrt(num); i++) {
//        if (num % i == 0) {
//            divisor.push_back(i);
//            long long j = num / i;
//            if (j != i) {
//                divisor.push_back(j);//��������Ӿͽ�����ѹ������������
//            }
//        }
//    }
//    //���ú������count��ֵΪ0
//    int count = 0;
//    //��������������������������������������˾���num����ϣ��𰸾�����Щ�������
//    vector<long long>::iterator a, b, c;
//    for (a = divisor.begin(); a != divisor.end(); a++) {
//        for (b = divisor.begin(); b != divisor.end(); b++) {
//            for (c = divisor.begin(); c != divisor.end(); c++) {
//                if ((*a) * (*b) * (*c) == num) {
//                    count++;
//                }
//            }
//        }
//    }
//    cout << count << endl;//�����������������
//    return 0;
//}