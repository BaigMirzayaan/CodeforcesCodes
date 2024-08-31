#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void construct(){
	ll n=0, k=0;
	cin>>n; cin>>k;
	if(n%2){
		cout<<"1"<<" "<<n/2<<" "<<n/2<<endl;
	}
	else{
		if(!(n%4)){
			cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
		}
		else{
			cout<<"2 "<<n/2-1<<" "<<n/2-1<<endl;
		}
	}
}

int main(){
	int test=0; 
	cin>>test;
	while(test--) construct();
	return 0;
}