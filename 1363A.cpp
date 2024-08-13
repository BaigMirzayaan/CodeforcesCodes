#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void oddselect(){
	int n=0, k=0;
	cin>>n>>k;
	int o=0, e=0;

	for(int i=1; i<=n; i++){
		int io=0; cin>>io;
		if(io%2) o++;
		else     e++;
	}
	if(k==n){
		if(o%2) {
			cout<<"Yes"<<endl; return;
		}
		else{
			cout<<"No"<<endl; return;
		}
	}

	if(!o){
		cout<<"No"<<endl; return;
	}
	else{
		if(e==0){
			if(k%2){
				cout<<"Yes"<<endl; return;
			}
			else{
				cout<<"No"<<endl; return;
			}
		}
		else{
			cout<<"Yes"<<endl; return;
		}
	}
}
int main(){
	int test=0;
	cin>>test;
	while(test--) oddselect();
	return 0;
}
