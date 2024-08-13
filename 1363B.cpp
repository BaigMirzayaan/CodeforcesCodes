
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void makegood(){
	int n=0, a=0, b=0; 
	string s=""; cin>>s; n=s.size();
	for(int i=0; i<n; i++) bool t=s.at(i)=='1'?(++a):(++b);
	int ctr=INT_MAX;

	for(int i=1; i<=n; i++){
		int temp=0;
		for(int j=0; j<i; j++){
			if(s.at(j)=='0') temp++;
		}
		int temp1=temp;
		temp=temp+(a-(i-temp));
		temp=min(temp, (i-temp1)+(b-temp1));
		ctr=min(temp, ctr);
	}

	cout<<ctr<<endl;
}

int main(){
	int test=0;
	cin>>test;
	while(test--) makegood();
	return 0;
}
