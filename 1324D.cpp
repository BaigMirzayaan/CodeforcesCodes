#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll res; 
void topic_finder(){
	int n, ctr_z=0; cin>>n; 
	vector<int> a(n, 0), b(n, 0);
	vector<int> p, ng;

	for(auto &x: a) cin>>x;
	for(auto &x: b) cin>>x; 

	res=0; 
	for(int i=0; i<n; i++){
		int d = a[i] - b[i]; 
		if( d > 0 ) p.push_back(d);
		else if( !d ) ctr_z++; 
		else         ng.push_back( abs(d) );
	}
	sort(p.begin(), p.end()); 

	for(auto x: ng){
		int f=0, l=p.size()-1; int mid=(f+l)/2, li=0; 

		while(f<=l){
			if(p[mid] >= x){
				li=mid; l=mid-1; 
			}
			else f=mid+1;
			mid=(f+l)/2;
		}
		res+=(p.size()-li);
	} 
	n=p.size();
	res+=(n*(n-1))/2; res+=(n*ctr_z);

	cout<<res<<endl; 
}
int main(){
	topic_finder();
	return 0;
}