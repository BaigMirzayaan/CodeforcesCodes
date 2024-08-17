
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void boatrace(){
	int n; cin>>n;

	map<int, int> mapper;
	for(int i=0; i<n; i++){
		int e; cin>>e;
		if(!mapper.count(e)) mapper[e]=1;
		else mapper[e]++;
	}
	map<int, int> m2;

	int c=0;
	for(auto m: mapper){
		if(m.second>1)
		m2[2*m.first]=m.second/2+(m2.count(2*m.first)?m2[2*m.first]:0);
		for(auto n: mapper){
			if(n.first<=m.first) continue;
			else{
				int e=m.first+n.first;
				if(!m2.count(e)) m2[e]=min(m.second, n.second);
				else             m2[e]=min(m.second, n.second)+m2[e];
			}
		}
	}

	for(auto y: m2){
		c=max(c, y.second);
	}
	cout<<c<<endl;
}
int main(){
	int test=0;
	cin>>test;
	while(test--) boatrace();
	return 0;
}
