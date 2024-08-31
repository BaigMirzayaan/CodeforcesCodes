#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void marray(){
	int n=0, k=0; ll c=0; 
	cin>>n; cin>>k; 
	vector<ll> rem(k, 0);

	for(int i=1; i<=n; i++){
		ll e=0; cin>>e; rem[e%k]++;
	}


	for(int i=0; i<k; i++){
		if(i==0){
			if(rem[i]>0) c++;
			continue;
		}
		if(rem[i]>0){
			if(rem[k-i]>0){ 
				int f=1;
				if(rem[k-i]==rem[i]) f=0;
				ll curr=min(rem[k-i], rem[i])+f;
				ll m_curr=max(rem[k-i], rem[i])-curr;
				c+=m_curr;
				rem[k-i]=-1;
				c++;
			}
			else{
				c+=rem[i]; rem[i]=-1;
			}
		}	
	}

	cout<<c<<endl;
}
int main(){
	int test=0;
	cin>>test;
	while(test--) marray();
	return 0;
}