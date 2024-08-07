
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void alternator(){
	int n=0; cin>>n; 
	vector<ll> v(n, 0);
	vector<ll> pos, neg;

	for(int i=0; i<n; i++) cin>>v[i];

	for(int i=0; i<n; i++){
		int f=(v[i]>0)?1:0;
		ll temp=INT_MIN;
		if(f) { while(i<n&&v[i]>0){ temp=max(temp, v[i]); i++; } pos.push_back(temp); i--;}
		else  { while(i<n&&v[i]<0){ temp=max(temp, v[i]); i++; } neg.push_back(temp); i--;}
	}

	ll k=min(pos.size(), neg.size());
	ll i=0; ll sum=0;

	while(i<k){
		sum+=pos[i]; 
		sum+=neg[i];
		i++;
	}
	if(pos.size()<neg.size()) sum+=neg[i];
	if(neg.size()<pos.size()) sum+=pos[i];

	cout<<sum<<endl;
}
int main(){
	int test=0;
	cin>>test;
	while(test--) alternator();
	return 0;
}
