
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void storehouse(){
	ll n, twos=0, fours=0; cin>>n; 
	map<ll, ll, greater<int> > planks;

	for(ll i=1; i<=n; i++){
		ll v; cin>>v;
		planks[v]++;
		if(planks[v]%2==0) twos++;
		if(planks[v]%4==0) fours++;
	}

	ll q; cin>>q;

	while(q--){
		char s; cin>>s; ll num; cin>>num; 
		if(s=='+'){
			planks[num]++; 
			if(planks[num]%2==0) twos++;
			if(planks[num]%4==0) fours++;
		}
		else{
			if(planks[num]%2==0) twos--;
			if(planks[num]%4==0) fours--; 
			planks[num]--;
		}
		if(fours>=1){
			if(twos>=4) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		} 
		else cout<<"NO"<<endl; 
	}
}

int main(){

	storehouse();
	return 0;
}
