
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void max_sum_products(){
	ll n; cin>>n;
	vector<ll> a(n, 0), b(n, 0);
	vector<vector<ll>> delta(n, vector<ll> (n, 0));
	ll pro=0, ans=INT_MIN;

	for(int i=0; i<n; i++)  cin>>a[i];
	for(int i=0; i<n; i++){ cin>>b[i]; pro+=(a[i]*b[i]);}
	ans=pro; 

	for(int i=1; i<n; i++){
		for(int j=0; (j+i)<n; j++){
			ll temp_pro=pro;
			temp_pro-=(a[j+i]*b[j+i]); temp_pro-=(a[j]*b[j]);
			temp_pro+=(a[j+i]*b[j]); temp_pro+=(a[j]*b[j+i]);
			temp_pro+=(delta[j+1][j+i-1]);
			delta[j][j+i]=temp_pro-pro;
			ans=max(ans, temp_pro);
		}
	}

	cout<<ans<<endl; 
}
int main(){
	max_sum_products();
	return 0;
}
