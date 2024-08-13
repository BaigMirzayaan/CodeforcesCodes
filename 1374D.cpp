
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void make_zero_rem_arr(){
	int n, k; cin>>n>>k; 
	map<int, int> m;
	ll w=0; ll x=0;
	for(int i=0; i<n; i++){ int e; cin>>e; if( e%k ){ m[ e%k ]++; w=m[e%k]; x=max(x, (w-1)*k + 1 + k - e%k ); } }

	cout<<x<<endl; 
}
int main(){
	int test=0;
	cin>>test;
	while(test--) make_zero_rem_arr();
	return 0;
}
