#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	// ���ڴ��������Ĵ���
	// printf("%.2lf", x);
	int n, grade;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> grade;
		v.push_back(grade);

	}
	sort(v.begin(), v.end()); //����Ҫ��ôд
	cout << v[v.size() - 1] << endl << v[0] << endl;
	// ���ƽ��ֵ
	double sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}
	double c = sum / v.size();
	printf("%.2lf", c);//C++�������뱣����λС��
	return 0;
}