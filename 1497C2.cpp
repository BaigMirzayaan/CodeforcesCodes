
#include<bits/stdc++.h>
using namespace std;
#define lint long long int
#define ld long double

void k_lcm(){
	lint n, k; cin>>n>>k; 
	for(lint i=1; i<=(k-3); i++) cout<<"1 ";
		n=n-(k-3);

	if(!(n%2)){
		if(!(n%4)) cout<<n/2<<" "<<n/4<<" "<<n/4;
		else    cout<<"2 "<<n/2-1<<" "<<n/2-1;
	}
	else{
		cout<<"1 "<<n/2<<" "<<n/2;
	}

	cout<<endl; 
}

int main(){
	int test=0;
	cin>>test;
	while(test--) k_lcm();
	return 0;
}
