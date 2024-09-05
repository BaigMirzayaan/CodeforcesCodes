
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void product_mod_n(){
    int n; cin>>n;
    vector<bool> print_ar(n+1, true);
    ll pro=1;

    for(int i=1; i<n; i++){
        if(__gcd(n, i)!=1){ print_ar[i]=0; continue; }
        pro*=(i%n);
        pro%=n;
    }
    if(pro!=1) print_ar[pro]=0;
    cout<<count(print_ar.begin()+1, print_ar.end()-1, 1)<<endl;

    for(int i=1; i<n; i++) if(print_ar[i]) cout<<i<<" ";

    cout<<endl; 

}
int main(){
    product_mod_n();
    return 0;
}

