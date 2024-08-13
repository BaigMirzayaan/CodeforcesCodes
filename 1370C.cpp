
#include<bits/stdc++.h>
using namespace std;
#define lnt long long int
#define ld long double

bool power_of_2(lnt n){
	lnt e=2;
	for(int i=1; i<=36; i++) if((e*=2)==n) return true;
	return false;
}
bool is_prime(lnt n){
	if(n==1) return false;
	for(lnt i=2; i<=sqrt(n); i++) if(!(n%i)) return false;
		return true;
}
void NumberGame(){
	lnt n; cin>>n;
	if( n==1 || power_of_2(n) || (!(n%2) and is_prime(n/2))) cout<<"FastestFinger"<<endl;
	else cout<<"Ashishgup"<<endl;
}
int main(){
	int test=0;
	cin>>test;
	while(test--) NumberGame();
	return 0;
}

