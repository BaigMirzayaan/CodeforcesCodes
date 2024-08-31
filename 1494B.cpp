
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int m1, m2, m3, m4;
int n, U, R, D, L; 
bool f=true;

void check(){ 
	if( (m1+m2)<=R and (R-m1-m2)<=(n-2) and (m2+m3)<=D and (D-m2-m3)<=(n-2) and (m3+m4)<=L and (L-m3-m4)<=(n-2) and (m4+m1)<=U and (U-m4-m1)<=(n-2) ) {
		cout<<"YES"<<endl; f=false; 
	}
}

void Berland_crosswood(){
	f=true;
	cin>>n>>U>>R>>D>>L; 

	for(int i=1; i<=16 and f; i++){
		if(i==1){
			m1=0; m2=0; m3=0; m4=0; 
		}
		else if(i==2){
			m1=0; m2=0; m3=0; m4=1; 
		}
		else if(i==3){
			m1=0; m2=0; m3=1; m4=0;
		}
		else if(i==4){
			m1=0; m2=0; m3=1; m4=1;
		}
		else if(i==5){
			m1=0; m2=1; m3=0; m4=0;
		}
		else if(i==6){
			m1=0; m2=1; m3=0; m4=1;
		}
		else if(i==7){
			m1=0; m2=1; m3=1; m4=0;
		}
		else if(i==8){
			m1=0; m2=1; m3=1; m4=1;
		}
		else if(i==9){
			m1=1; m2=0; m3=0; m4=0;
		}
		else if(i==10){
			m1=1; m2=0; m3=0; m4=1;	
		}
		else if(i==11){
			m1=1; m2=0; m3=1; m4=0;
		}
		else if(i==12){
			m1=1; m2=0; m3=1; m4=1;
		}
		else if(i==13){
			m1=1; m2=1; m3=0; m4=0;
		}
		else if(i==14){
			m1=1; m2=1; m3=0; m4=1;
		}
		else if(i==15){
			m1=1; m2=1; m3=1; m4=0;
		}
		else{
			m1=1; m2=1; m3=1; m4=1;
		}
		check();
	}
	if(f) cout<<"NO"<<endl; 
}
int main(){
	int test=0;
	cin>>test;
	while(test--) Berland_crosswood();
	return 0;
}
