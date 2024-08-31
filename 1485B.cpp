
#include<bits/stdc++.h>
using namespace std;
#define lnt long long int
#define ld long double

int main(){
	lnt n, q, k; 
	cin>>n>>q>>k;
	vector<lnt> v(n+1, 0);
	vector<lnt> memo(n+1, 0);
	for(lnt i=1; i<=n; i++) cin>>v[i];

	for(lnt i=2; i<n; i++){
		lnt e=v[i+1]-v[i-1]-1;
		memo[i]=memo[i-1]+e;
	}

	for(lnt i=1; i<=q; i++){
		lnt l, r, e=0; cin>>l>>r;
		if(r==l){ cout<<(k-1)<<endl; continue;}
		if(r-1>l)
		e=memo[r-1]-memo[l];
		e+=(v[l+1]-1+k-v[r-1]);
		e-=(r-l+1);	
		cout<<e<<endl;
	}
	return 0;
}
