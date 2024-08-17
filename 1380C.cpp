
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void make_teams(){
	int n, x; cin>>n>>x; 
	int c=0, next_ind=INT_MAX;
	vector<int> v(n, 0); 
	for(auto &i: v) cin>>i;
	sort(v.begin(), v.end()); 
	
	for(int i=0; i<n; i++){
		int dni=(x/v[i]); if(x%v[i]) dni++; dni+=i; dni--;
		if(dni<next_ind){
			next_ind=dni;
		}
		if(i==next_ind){ c++; next_ind=INT_MAX; continue;}
	}

	cout<<c<<endl; 
}
int main(){
	int test=0;
	cin>>test;
	while(test--) make_teams();
	return 0;
}
