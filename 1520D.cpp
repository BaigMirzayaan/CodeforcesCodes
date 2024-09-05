#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ncr(ll i){
	return i*(i-1)/2;
}
void make_pair(){
	ll n=0; cin>>n;
	ll ctr=0;
	map<ll, ll> hash;
	for(int i=1; i<=n; i++){
		ll e=0; cin>>e;
		if(true){
			if(!hash.count(e-i)) hash[e-i]=1;
			else 				 hash[e-i]++;
	     }
	}
	for(const pair<int, int> h: hash){
		ctr+=ncr(h.second);
	}
	cout<<ctr<<endl;
}
int main(){
	int test=0; 
	cin>>test;
	while(test--) make_pair();
	return 0;
}