
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void Element_extermination(){
	int n; cin>>n; 
	vector<int> v(n, 0); 
	for(int i=0; i<n; i++) cin>>v[i]; 

	if(v[0] < v[n-1]) cout<<"YES"<<endl; 
	else              cout<<"NO"<<endl; 

}
int main(){
	int test=0;
	cin>>test;
	while(test--) Element_extermination();
	return 0;
}

// 3 4 5 6 1 2 