#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	// 请在此输入您的代码
	// printf("%.2lf", x);
	int n, grade;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> grade;
		v.push_back(grade);

	}
	sort(v.begin(), v.end()); //容器要这么写
	cout << v[v.size() - 1] << endl << v[0] << endl;
	// 输出平均值
	double sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}
	double c = sum / v.size();
	printf("%.2lf", c);//C++四舍五入保留二位小数
	return 0;
}