
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void kdiv(){
	int n=0, k=0; cin>>n; cin>>k;
	int t=(k/(n-1))*n; 
	if(k%(n-1)==0){
		cout<<(t-1)<<endl; return;
	} 
	cout<<t+(k%(n-1))<<endl;	
}
int main(){
	int test=0;
	cin>>test;
	while(test--) kdiv();
	return 0;
}
