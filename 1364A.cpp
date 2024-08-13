
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void subarraydiv(){
	int n, k; cin>>n>>k;
	int f=0, l=n-1, sum=0; 
	vector<int> v(n, 0);
	for(int i=0; i<n; i++) { cin>>v[i]; sum+=v[i];}

	if(sum%k){
		cout<<n<<endl; return;
	}

	while(f<n){
		if(v[f++]%k) break;
	}
	while(l>=0){
		if(v[l--]%k) break; 
	}

	int c=max(n-f, l+1);
	c=!c?-1:c;
	
	cout<<c<<endl;
}
int main(){
	int test=0;
	cin>>test;
	while(test--) subarraydiv();
	return 0;
}
