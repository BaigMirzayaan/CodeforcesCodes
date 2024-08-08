
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void unfair_round(){
	ll n=0, unfairness=0; cin>>n;
	if(n==1){ cout<<"1\n"; return; }

	ll dn=2, c=1;
	while(sqrt(dn)<=n){
		ll check= (1LL << (c - 1));
		unfairness+=(n/dn*c + ( check<=(n%dn) ? 1 : 0)*c );
		dn*=2; c++;
	}

	cout<<unfairness<<endl; 
}
int main(){
	int test=0;
	cin>>test;
	while(test--) unfair_round();
	return 0;
}

// 1 2 1 3 1 2 1 4 1 2 1 (11) 3 1 2 1 5 1 2 1 3 1 2 1 4 
// 2 3 2 4 2 (11) 3 2 5 2 3 2 4 
// 3 4 (11) 3 5 3 4 
// 4 (11) 5 4 

// 0 1 3 6 10 