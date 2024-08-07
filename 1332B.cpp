
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void color_the_sequence(){
	ll n, c=1; cin>>n; 
	bool f=false; 
	vector<ll> v(n, 0);
	vector<ll> color(n, 0);

	for(ll i=0; i<n; i++){ cin>>v[i]; if( !(v[i]%2) ){ color[i]=c; f=true; }}
	ll m=*max_element(v.begin(), v.end());
	if(f) c++;

	for(ll i=3; i<=m; i++){
		f=false;
		for(ll j=0; j<n; j++){
			if(!(v[j]%i) and !color[j]){ color[j]=c; f=true; }
		}
		if(f) c++;
	}

	cout<<(c-1)<<endl;
	for(auto x: color){
		cout<<x<<" ";
	}
	cout<<endl; 
}
int main(){
	int test=0;
	cin>>test;
	while(test--) color_the_sequence();
	return 0;
}
