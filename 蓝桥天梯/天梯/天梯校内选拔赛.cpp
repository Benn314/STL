#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin>>N;
	string sname,sbir,sphone;
	vector<string> name;
	vector<string> bir;
	vector<string> phone;
	for(int i=0;i<N;i++){
		cin>>sname>>sbir>>sphone;
		name.push_back(sname);
		bir.push_back(sbir);
		phone.push_back(sphone);
	}
	for(int i=0;i<N-1;i++){
		for(int j=0;j<N-i-1;j++){
//			s1.compare(s2)==-1
			if(bir[j+1].compare(bir[j]) == -1){
				string tempB = bir[j+1];
				bir[j+1]=bir[j];
				bir[j]=tempB;
				
				string tempN = name[j+1];
				name[j+1]=name[j];
				name[j]=tempN;
				
				string tempP = phone[j+1];
				phone[j+1]=phone[j];
				phone[j]=tempP;
			}
		}
	}
	
	for(int i=0;i<N;i++){
		if(i!=N-1){
			cout<<name[i]<<" "<<bir[i]<<" "<<phone[i]<<endl;
		}else{
			cout<<name[i]<<" "<<bir[i]<<" "<<phone[i];
		}
	}
	return 0; 
} 

//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int K,count=0;
//	cin>>K;
//	string ta,me;
//	while(1){
//		cin>>ta;
//		if(ta=="End"){
//			break;
//		}
////		if(count==K){
////			count=0;
////		}
//		if(count==K&&count!=0){
//			cout<<ta<<endl;
//			count=0;
//			continue;
//		} else{
//			if(ta=="ChuiZi"){
//				cout<<"Bu"<<endl;
//			}else if(ta=="JianDao"){
//				cout<<"ChuiZi"<<endl;
//			}else if(ta=="Bu"){
//				cout<<"JianDao"<<endl;
//			}
//		}
//		count++;
//	}
//	return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int n, sum = 0, cnt = 1, num[110] = { 0 }, id_school[100001] = { 0 };
//    cin >> n;
//    vector<vector<int>> v(n + 1);
//    for (int i = 1; i <= n; i++)
//        cin >> num[i];
//    while (1) {
//        bool flag = true;
//        for (int i = 1; i < v.size(); i++) {
//            if (v[i].size() < num[i] * 10) {
//                if (id_school[cnt - 1] != i) {
//                    id_school[cnt] = i;
//                    v[i].push_back(cnt);
//                    cnt++;
//                }
//                else { 
//                    id_school[cnt + 1] = i;
//                    v[i].push_back(cnt + 1);
//                    cnt = cnt + 2;
//                }
//                flag = false;
//            }
//        }
//        if (flag) break;
//    }
//    for (int i = 1; i < v.size(); i++) {
//        cout << "#" << i << endl;
//        for (int j = 0; j < v[i].size(); j++) {
//            if (j != 0 && j % 10 != 0) cout << " ";
//            if (j != 0 && j % 10 == 0) cout << endl;
//            cout << v[i][j];
//        }
//        cout << endl;
//    }
//    return 0;
//}




//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	double foot,inch,m;
//	//m=(foot+inch/12)*0.3048;
//	inch = 12/(0.3048*145.0);
//	//foot = 144/0.3048/145.0;
//	//cout<<inch<<" "<<foot;
//	foot = inch*12;
//	double cm;
//	cin>>cm;
//	cm=cm/100;
//	//cout<<(inch*cm+0.05)*10;
////	printf("%.0lf %.0lf",inch*cm,foot*cm);
//	printf("%.0lf %.0lf",(inch*cm+0.05)*10,foot*cm);
//	
//	return 0;
//}





//int main(){
//	int N,num,flag=0;
//	cin>>N;
//	for(int i=0;i<N;i++){
//		cin>>num;
//		for(int j=2;j<sqrt(num);j++){
//			if(num%j!=0){
//				flag=1;
//				continue;
//			}
//			flag=0;
//			break;
//		}
//		if(i!=N-1){
//			if(flag==1){
//				cout<<"Yes"<<endl;
//			}else{
//				cout<<"No"<<endl;
//			}
//		}else{
//			if(flag==1){
//				cout<<"Yes";
//			}else{
//				cout<<"No";
//			}
//		}
//	}
//	return 0;
//} 



//int main(){
//	int N,sg1,sg2,sg3,grade_maxIndex=0;
//	string sid,sname;
//	cin>>N;
//	vector<string> id;
//	vector<string> name;
//	vector<int> grade;
//	for(int i=0;i<N;i++){
//		cin>>sid>>sname>>sg1>>sg2>>sg3;
//		id.push_back(sid);
//		name.push_back(sname);
//		int sum=sg1+sg2+sg3;
//		grade.push_back(sum);
//	}
//	for(int i=0;i<N-1;i++){
//		if(grade[i]<grade[i+1]){
//			grade_maxIndex=i+1;
//		}
//	}
//	cout<<name[grade_maxIndex]<<" "<<id[grade_maxIndex]<<" "<<grade[grade_maxIndex];
//	return 0;
//} 




//#include <iostream>
//using namespace std;
//
//int main(){
//	string s;
//	getline(cin,s);
//	vector<char> v;
////	v.push_back(s);
//	//cout<<s;
//	for(int i=0;i<s.length();i++){
//		if(s[i]=='['){
//			i=0;
//		}
//		if(s[i]==']'){
//			i=s.length()-1;
//		}
//		if(s[i]=='{'){
//			i--;
//		}
//		if(s[i]=='}'){
//			i++;
//		}
//	}
//	return 0;
//} 






//#include <iostream>
//using namespace std;
//
//int main(){
//	int N,flag=0;
//	string s;
//	//cout<<(int)'a'<<" "<<(int)'z'<<" "<<(int)'A'<<" "<<(int)'Z';
//	//cout<<'a'+1;
//	cin>>N;
//	for(int i=0;i<N;i++){
//		cin>>s;
//		for(int j=0;j<s.length()-1;j++){
//			//字母为大写 
//			if(s[j]>=65 && s[j]<=90){
//				if(s[j+1]==tolower(s[j]) || s[j+1]-s[j]==1){
//					flag=1;
//					continue;
//				}else{
//					flag=0;
//					break;
//				}
//			}
//			//字母为小写
//			 if(s[j]>=97 && s[j]<=122){
//				if(s[j]-s[j+1]==1 || s[j+1]==toupper(s[j])){
//					flag=1;
//					continue;
//				}else{
//					flag=0;
//					break;
//				}
//			}
//		}
//		if(i!=N-1){
//			if(flag==1){
//				cout<<"Y"<<endl;
//			}else{
//				cout<<"N"<<endl;
//			}
//		}else{
//			if(flag==1){
//				cout<<"Y"<<endl;
//			}else{
//				cout<<"N"<<endl;
//			}
//		}
//		
//	}
//	return 0;
//} 




//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int N,grade,count_min=1,count_max=1;
//	vector<int> v;
//	cin>>N;
//	for(int i =0;i<N;i++){
//		cin>>grade;
//		v.push_back(grade);
//	}
//	sort(v.begin(),v.end());
//	
//	for(int i=0;i<v.size();i++){
//		if(v[i]==v[i+1]){
//			count_min++;
//		}else{
//			break;
//		}
//	}
//	for(int i=v.size()-1;i>0;i--){
//		if(v[i]==v[i-1]){
//			count_max++;
//		}else{
//			break;
//		}
//	}
//	cout<<v[1]<<" "<<count_min<<endl;
//	cout<<v[v.size()-1]<<" "<<count_max<<endl;
//	return 0;
//} 




//#include <iostream>
//using namespace std;
//
//int main(){
//	double N,M,chushu;
//	cin>>N>>M;
//	chushu = N/M;
//	printf("%.0lf/%.1lf=%.0lf",N,chushu,M); 
//	return 0;
//} 
