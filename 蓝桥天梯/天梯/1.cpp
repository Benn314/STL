//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	string s="adsareww";
////	cout<<s.find("eww");
//	int N;
//	cin>>s>>N;
//	int cutLeft,cutRight;
//	string insertFront,insertBack;
//	for(int i=0;i<N;i++){
//		cin>>cutLeft>>cutRight>>insertFront>>insertBack;
//		string newStr = s.substr(cutLeft-1,cutRight-cutLeft+1);
//		if(s.find(insertFront)<=s.length()&&s.find(insertBack)<=s.length()){
//			
//			s.erase(cutLeft-1,cutRight-cutLeft+1);
//			s.insert(cutRight-1,newStr);
//		}else{
//			s+=newStr;
//		}
//	}
//	cout<<s;
//	return 0;
//} 


//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int N,C;
//	string school;
//	int people,peopleTmp,sum=0;
//	cin>>N>>C;
//	for(int i=0;i<N;i++){
//		cin>>school>>people;
//		if(people%C==0){
//			peopleTmp = people/C;
//		}else{
//			peopleTmp = people/C+1;
//		}
//		cout<<school<<" "<<peopleTmp<<endl;
//		sum+=people;
//	}
//	if(sum%C==0){
//		cout<<sum/C;
//	}else{
//		cout<<sum/C+1;
//	}
//	return 0;
//} 


//未完待续。。。 
#include <bits/stdc++.h>
using namespace std;

int main(){
//	string Na="999999999",Nb="891";
//	cout<<stoi(to_string(Na[0]))-'0';
//	int Sa=0,Sb=0;
//	for(int i=0;i<Na.length();i++){
//		Sa += (stoi(to_string(Na[0]))-'0');
//	}
//	for(int i=0;i<Nb.length();i++){
//		Sb += (stoi(to_string(Nb[i]))-'0');
//	}
//	cout<<Sa<<" "<<Sb<<endl;
//	
//	long long L_Na = stoi(Na);
//	long long L_Nb = stoi(Nb);
//	
//	if((L_Na%Sb==0 && L_Nb%Sa==0) || (L_Na%Sb!=0 && L_Nb%Sa!=0)){
//		if(L_Na>L_Nb){
//			cout<<"A"<<endl;
//		}else{
//			cout<<"B"<<endl;
//		}
//	}else if(L_Na%Sb==0){
//		cout<<"A"<<endl;
//	}else if(L_Nb%Sa==0){
//		cout<<"B"<<endl;
//	}
//	cout<<nb/sa; //1
	
	string Na,Nb;
	int N;
	cin>>N;
	while(N--){
		cin>>Na>>Nb;
		int Sa=0,Sb=0;
		for(int i=0;i<Na.length();i++){
			Sa += (stoi(to_string(Na[0]))-'0');
		}
		for(int i=0;i<Nb.length();i++){
			Sb += (stoi(to_string(Nb[i]))-'0');
		}
		
		long long L_Na = stoi(Na);
		long long L_Nb = stoi(Nb);
		
		if((L_Na%Sb==0 && L_Nb%Sa==0) || (L_Na%Sb!=0 && L_Nb%Sa!=0)){
			if(L_Na>L_Nb){
				cout<<"A"<<endl;
			}else{
				cout<<"B"<<endl;
			}
		}else if(L_Na%Sb==0){
			cout<<"A"<<endl;
		}else if(L_Nb%Sa==0){
			cout<<"B"<<endl;
		}
	}
	return 0;
} 


//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int n0,n1,n;
//	map<int,int> m;
//	cin>>n0>>n1>>n;
//	int flag=0;
//	for(int i=2;i<n;i++){
//		if(n0%i==0 && n1%(n-i)==0){
//			int result_n0=n0/i;
//			int result_n1=n1/(n-i);
//			int result = abs(result_n0 - result_n1);
//			m.insert(pair<int,int>(result,i));
//			flag=1;
//		}
//	}
//	if(flag==0){
//		cout<<"No Solution";
//	}else{
//		cout<<m.begin()->second<<" "<<n-(m.begin()->second);
//	}
//	
//	return 0;
//} 


//未完待续。。。 
//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int N,M,K; // M是帽子颜色 
//	vector<int> v;
//	cin>>N;
//	for(int i=0;i<N;i++){
//		cin>>M;
//		v.push_back(M);
//	}
//	cin>>K;
//	for(int i=0;i<K;i++){
//		int baby_guess,noguessCount=0,right=0,error=0;
//		for(int j=0;j<N;j++){
//			cin>>baby_guess;
//			if(baby_guess==0){
//				noguessCount++;
//				continue;
//			}else if(baby_guess==v[j]){
//				right++;
//				continue;
//			}else if(baby_guess!=v[j]){
//				error++;
//				continue;
//			}
//		}
//		if(i!=K-1){
//			
//			if(noguessCount==N || error>=1){
//				cout<<"Ai Ya"<<endl;
//			}else if(noguessCount!=N && right>=1 && error==0){
//				cout<<"Da Jiang!!!"<<endl;
//			}
//
//		}else{
//			if(noguessCount==N || error>=1){
//				cout<<"Ai Ya";
//			}else if(noguessCount!=N && right>=1 && error==0){
//				cout<<"Da Jiang!!!";
//			}
//
//		}
//		
//	}
//	
//	return 0;
//} 



//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int N;
//	int A,B,C;
//	cin>>N;
//	for(int i=0;i<N;i++){
//		if(i!=N-1){
//			cin>>A>>B>>C;
//			if(C==A*B){
//				cout<<"Lv Yan"<<endl;
//			}else if(C==A+B){
//				cout<<"Tu Dou"<<endl;
//			}else{
//				cout<<"zhe du shi sha ya!"<<endl;
//			}
//		}
//		else{
//			cin>>A>>B>>C;
//			if(C==A*B){
//				cout<<"Lv Yan";
//			}else if(C==A+B){
//				cout<<"Tu Dou";
//			}else{
//				cout<<"zhe du shi sha ya!";
//			}
//		}
//	}
//		
//		
//	return 0;
//} 


//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int N,M,K;
//	string X;
//	cin>>N>>X>>M>>K;
//	if(K==N){
//		cout<<"mei you mai "<<X <<" de";
//	}else if(K==M){
//		cout<<"kan dao le mai "<<X <<" de";
//	}else{
//		cout<<"wang le zhao mai "<<X <<" de";
//	}
//	return 0;
//} 


//L1-2 什么是机器学习
//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int a,b;
//	cin>>a>>b;
//	int c=a+b;
//	cout<< c-16<<endl<<c-3<<endl<<c-1<<endl<<c;
//	return 0;
//} 
