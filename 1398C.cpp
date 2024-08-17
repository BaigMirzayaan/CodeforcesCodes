
#include<bits/stdc++.h>
using namespace std; 

void my_func(vector<int>& v, int n){
	map<int, int> M; M[0]++;
	long long int top=0, ans=0;

	for(int i=0; i<n; i++){
		top+=(v[i]-1);
		M[top]++;
	}

	for(auto x: M){
		ans+=(1LL*x.second*(x.second-1)/2);
	}

	cout<<ans<<endl;
}
int main(){
	int test=0;
	cin>>test;
	while(test--){
		int n; cin>>n; 
		string s; cin>>s; 
		vector<int> v(n, 0);
		for(int i=0; i<n; i++) v[i]=stoi(s.substr(i, 1));

		my_func(v, n);
	}
	return 0;
}
