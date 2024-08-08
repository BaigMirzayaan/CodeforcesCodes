
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void bitwise(){
	int n; cin>>n; 

	if(n<4){
		cout<<"-1"<<endl; 
		return; 
	}

	vector<int> first_elements, last_elements;

	for(int i=5; i<=n; i++){
		if(i%2) first_elements.push_back(i);
		else    last_elements.push_back(i);
	}

	for(int i=first_elements.size()-1; i>=0; i--) cout<<first_elements[i]<<" ";
	cout<<"3 1 4 2 "; 
	for(auto x: last_elements) cout<<x<<" "; cout<<endl; 
}
int main(){
	int test=0;
	cin>>test;
	while(test--) bitwise();
	return 0;
}
