
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void RationalLee(){
	ll n, k; cin>>n>>k;
	vector<ll> a(n, 0), w(k, 0);
	for(auto &ai: a) cin>>ai;
	for(auto &wi: w) cin>>wi;

	sort(w.begin(), w.end());
	sort(a.begin(), a.end());
	ll sum=0, front_ind=0; 

	for(auto x: w){
		if(x==1){ sum+=(2*a.back()); a.pop_back(); }
		else break;
	}
	sort(w.begin(), w.end(), greater<int>() );

	for(auto x: w){
		if(x==1) break;
		else{
			sum+=a[front_ind]; front_ind+=(x-1); sum+=a.back(); a.pop_back(); 
		}
	}

	cout<<sum<<endl; 
}
int main(){
	ll test=0;
	cin>>test;
	while(test--) RationalLee();
	return 0;
}

/* 1 7 13 17
*/
