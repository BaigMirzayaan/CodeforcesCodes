#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void bitinverter(){

	int n=0; cin>>n;
	string s1="", s2="";
	cin>>s1>>s2; 
	s1+='\0'; s2+='\0';
	int c1=0, c2=0;

	for(int i=0; i<n; i++){
		c1+=s1[i]=='1';
		c2+=s1[i]=='0';

		if((s1[i]==s2[i])!=(s1[i+1]==s2[i+1])&&c1!=c2){
			cout<<"NO"<<endl; return;
		}
	}

	cout<<"YES"<<endl;
}

int main(){
	int test=0;
	cin>>test;
	while(test--) bitinverter();
	return 0;
}