
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void Rotaion_match(){
	int n; cin>>n;
	vector<int> a(n+1, 0), b(n+1, 0);
	for(int i=1; i<=n; i++){ int e; cin>>e; a[e]=i; }
	for(int i=1; i<=n; i++){ int e; cin>>e; b[e]=i; }
    vector<int> res(n, 0); int ans=INT_MIN;

	for(int i=1; i<=n; i++){
		int diff=a[i]-b[i]; if(diff<0) diff+=n; res[diff]++;
		ans=max(ans, res[diff]);
	}
	
	cout<<ans<<endl;

}
int main(){
	Rotaion_match();
	return 0;
}
