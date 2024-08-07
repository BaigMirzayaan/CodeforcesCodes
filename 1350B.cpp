
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void orac_select_models(){
	int n; cin>>n; 
	vector<int> v(n+1, 0); 
	vector<int> dp(n+1, 1);
	for(int i=1; i<=n; i++) cin>>v[i];

	for(int i=1; i<=n; i++){
		int temp=dp[i];
		for(int j=1; j<=sqrt(i); j++){
			if( !(i%j)){
				if(v[j]<v[i])
				temp=max(temp, dp[i]+dp[j]);
				if(v[i/j]<v[i])
				temp=max(temp, dp[i/j]+dp[i]);
			}
		}
		dp[i]=temp;
	}

	cout<<*max_element(dp.begin(), dp.end())<<endl; 
}
int main(){
	int test=0;
	cin>>test;
	while(test--) orac_select_models();
	return 0;
}
