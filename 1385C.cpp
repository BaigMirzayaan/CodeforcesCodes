
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void good_array_checker(){
	int n; cin>>n;
	vector<int> v(n, 0);
	bool f=true;

	for(int i=0; i<n; i++) cin>>v[i];

	int i;
	for(i=n-1; i>=0; i--){
		if(f&&v[i]<=v[i-1]) continue;
		else{
			f=false; 
			if(v[i]<v[i-1]) break;
		}
	}
	i=i<0?0:i;
	cout<<i<<endl;
}

int main(){
	int test=0;
	cin>>test;
	while(test--) good_array_checker();
	return 0;
}
