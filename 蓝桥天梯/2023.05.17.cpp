#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> s;
	s.insert(3);
	s.insert(1);
	s.insert(2);
	for(set<int>::iterator i=s.begin();i!=s.end();i++){
		cout<<*i<<" "; // 结果：1 2 3
	}
	// 小结：c++的set容器会对插入的元素进行排序
	// 而JS则是按照插入的顺序进行排序 
	return 0;
} 
