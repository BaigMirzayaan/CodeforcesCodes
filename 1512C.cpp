#include<bits/stdc++.h>
using namespace std;

void pallindrome(){
	int a=0, b=0; string s=""; 
	cin>>b>>a>>s; int n=a+b;
	for(int i=0; i<n/2; i++){
		if((s.at(i)=='1'&&s.at(n-i-1)=='0')||(s.at(i)=='0'&&s.at(n-i-1)=='1')){ 
			cout<<"-1"<<endl; return;
		}
		if(s.at(i)=='1'||s.at(n-i-1)=='1'){
			s[i]='1'; s[n-i-1]='1'; a-=2; 
		}
		else if(s.at(i)=='0'||s.at(n-i-1)=='0'){
			s[i]='0'; s[n-i-1]='0'; b-=2; 
		}

		if(a<0||b<0){ cout<<"-1"<<endl; return;}
	}
	for(int i=0; i<n/2; i++){
		if(s.at(i)=='?'){
			if(a>=2){
				s[i]='1'; s[n-i-1]='1'; a-=2;			
			}
			else if(b>=2){
				s[i]='0'; s[n-i-1]='0'; b-=2;
			}
			else{ cout<<"-1"<<endl; return;}
		}
		if(a<0||b<0){ cout<<"-1"<<endl; return;}
	}

	if(n%2){
		if(a&&(s.at(n/2)=='1'||s.at(n/2)=='?')) s[n/2]='1';
		else if(b&&(s.at(n/2)=='0'||s.at(n/2)=='?')) s[n/2]='0';
		else{ cout<<"-1"<<endl; return;}
	}
	cout<<s<<endl;
}
int main(){
	int n=0;
	cin>>n;
	while(n--) pallindrome();
	return 0;
}