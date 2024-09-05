#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void icpc_contest(){	
	ll n, l=INT_MIN, ptr=INT_MIN; cin>>n;
	vector<vector<ll>> mat(n+1, vector<ll> (1, 0));
	map<ll, ll> u; 
	vector<ll> uni(n, 0);
	vector<ll> size(n+1, 0);
	vector<ll> ans(n+1, 0);
	for(ll i=0; i<n; i++){ cin>>uni[i]; l=max(l, uni[i]); u[uni[i]]=1;}
	for(ll i=0; i<n; i++) { ll e; cin>>e; 
	    mat[uni[i]].push_back(e); size[uni[i]]+=1;
	    ptr=max(size[uni[i]], ptr);
	}

	for(const pair<ll, ll> i: u) {
		sort(mat[i.first].begin(), mat[i.first].end(), greater<int>());
		for(ll j=1; j<=size[i.first]; j++) mat[i.first][j]=mat[i.first][j]+mat[i.first][j-1];
		for(ll k=1; k<=size[i.first]; k++){
			ans[k-1]+=mat[i.first][size[i.first]/k*k-1];
		}
	}

	for(ll k=0; k<n; k++){	
		cout<<ans[k]<<" ";
	}
	cout<<endl;
}
int main(){
	int test=0;
	cin>>test;
	while(test--) icpc_contest(); 
	return 0;
}