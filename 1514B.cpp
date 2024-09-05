#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void bitwise(){
	ll n=0; ll k=0;
	cin>>n; cin>>k;
	ll ctr=1;
	for(int i=1; i<=k; i++){
		ctr*=n; ctr%=1000000007;
	}

	cout<<ctr<<endl;
}

int main(){
	int test=0;
	cin>>test;
	while(test--) bitwise();
	return 0;
}