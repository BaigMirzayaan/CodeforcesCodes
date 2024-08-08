
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void array_game(){
	ll n, S; cin>>n>>S;

	for(ll k=1; k<S; k++){
		if(k>=n and (S-k)>=n){
			cout<<"YES"<<endl;
			for(ll j=1; j<n; j++) cout<<"1 ";
				cout<<S-(n-1)<<endl; 
				cout<<k<<endl; return; 
		}
	}

	cout<<"NO"<<endl; 

}
int main(){
	array_game();
	return 0;
}

// 1 4
// 1 