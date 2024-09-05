
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void bitwise(){
	int n, k, ctr = 1; cin>>n>>k;
	map<char, int> M;
	string s = "a";
	char prev = 'a';

	for(int i = 2; i <= n; i++){
		M[prev] ++;
		if(M[prev] > k){
			M.clear(); ctr = 1; M[prev] ++;
		}
		
		s += ('a' - 1 + M[prev]);

		prev = s.back();
		
		if(prev == 'a' + k - 1){
			if(ctr >= k) ctr = 0;
			if(i < n) s += ('a' + ctr); ctr++; i++;
		}

		prev = s.back();
	}
	 	
	cout<<s<<endl; 
}
int main(){
	bitwise();
	return 0;
}
