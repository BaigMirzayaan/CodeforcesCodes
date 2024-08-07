#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void Phoenix_loves_beauty(){
	int n, k, m=INT_MIN; cin>>n>>k;
	vector<int> v( n+1, 0 );
	set<int> d; 
	for(int i=0; i<n; i++){ int x; cin>>x;  d.insert(x); v[x]++; m=max(m, x); }
	if(d.size() > k){ cout<<"-1"<<endl; return; }
	int g=(n*(d.size()+(k-d.size())));
	cout<<g<<endl;
	int i=n;
	while(i){
		int dm=m; 
		for(int i=k; i>0; i--){ cout<<dm<<" "; dm--; if(!dm) dm=1; }
		i--; 
	}
	cout<<endl;
}

int main(){
	int test=0; cin>>test;
	while(test--) Phoenix_loves_beauty(); return 0;
}