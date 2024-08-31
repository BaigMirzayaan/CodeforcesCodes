
#include<bits/stdc++.h>
using namespace std;
#define lnt long long int
#define ld long double

void cat_cycle(){
	lnt places, hours; cin>>places>>hours;

	if(!(places%2)){
		lnt c=hours%places;
		if(!c) c=places;
		cout<<c<<endl;
	}
	else{
		lnt dup=hours;
		dup=(hours/(places/2)); if(!(hours%(places/2))) dup--; if(hours>(places/2)) hours+=dup; 
		lnt c1=hours%places;
		if(!c1) c1=places;
		cout<<c1<<endl;
	}
}
int main(){
	int test=0;
	cin>>test;
	while(test--) cat_cycle();
	return 0;
}
