#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> s;
	s.insert(3);
	s.insert(1);
	s.insert(2);
	for(set<int>::iterator i=s.begin();i!=s.end();i++){
		cout<<*i<<" "; // �����1 2 3
	}
	// С�᣺c++��set������Բ����Ԫ�ؽ�������
	// ��JS���ǰ��ղ����˳��������� 
	return 0;
} 
