
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
void combinatron_fuction(ll ind, ll oa, ll curroa,  vector<ll> &v, ll selected, ll k);
ll global_c;
vector<ll> fact;
void And_game(){
	ll n; cin>>n; vector<ll> v(n, 0);
	ll minimum=INT_MAX;
	map<ll, ll> count;
	for(auto &x: v){ cin>>x; minimum=min(minimum, x); if(x==minimum) count[minimum]++; }


	if(count[minimum] < 2 ) { cout<<"0"<<endl; return; }
	for(auto x: v){
		if((minimum & x) < minimum){ cout<<"0"<<endl; return; }
	}
	
	global_c=(count[minimum]*(count[minimum]-1))%1000000007;
	global_c*=(fact[n-2]%1000000007); global_c%=1000000007;

	cout<<global_c<<endl;
}
int main(){
	fact.push_back(1);
	for(ll i=1; i<200001; i++) fact.push_back((fact[i-1]%1000000007)*i%1000000007);
	ll test=0;
	cin>>test;
	while(test--) And_game();
	return 0;
}
