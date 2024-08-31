
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void Ball_in_berland(){
	ll a, b, n, neg_n=0, e; cin>>a>>b>>n;
	multimap<ll, ll> map;
	vector<ll> temp(a+1, 0);

	for(ll i=0; i<n; i++){ cin>>e; temp[e]++;}
	for(ll i=1; i<=a; i++) if(temp[i]){ neg_n+=(temp[i]*(temp[i]-1)/2); }

	temp=vector<ll> (b+1, 0);

	for(ll i=0; i<n; i++){ cin>>e; temp[e]++; }
	for(ll i=1; i<=b; i++) if(temp[i]){ neg_n+=(temp[i]*(temp[i]-1)/2); }

	n=(n*(n-1)/2)-neg_n;

	cout<<n<<endl; 
}
int main(){
	ll test=0;
	cin>>test;
	while(test--) Ball_in_berland();
	return 0;
}
