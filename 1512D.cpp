#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void uncorrupt(){
	ll n=0; 
	cin>>n; n+=2; ll li=0, li1=0;
	vector<ll> num;
	vector<ll> num1;
    ll m=INT_MIN; ll sum=0; ll sum1=0; ll m1=m;
	for(ll i=0; i<n; i++){
		ll e=0; cin>>e; 
		num.push_back(e);
		sum+=e;
	}
	sum1=sum;
	sort(num.begin(), num.end()); m=num[num.size()-1];
	m1=num[num.size()-2]; num[num.size()-2]=m; n--; num.pop_back(); num1.pop_back();

	sum-=m; sum1-=m1;

	for(ll i=0; i<n; i++){
		if((sum-num[i])==m){
			li=num[i]; num[i]=-99999;
			break;
		}
		if((sum1-num1[i])==m1){
			li1=num1[i]; num1[i]=-99999;
			break;
		}
	}

	if(!li&&!li1){ cout<<"-1"<<endl; return; }
	
    if(!li1){
	for(ll i=0; i<n; i++){
		if(num[i]!=-99999)
		cout<<num[i]<<" ";
	}
    }
    else{
    	for(ll i=0; i<n; i++){
		if(num1[i]!=-99999)
		cout<<num1[i]<<" ";
	}
    }
	cout<<endl; 
}

int main(){
	int test=0;
	cin>>test;
	while(test--) uncorrupt();
	return 0;
}