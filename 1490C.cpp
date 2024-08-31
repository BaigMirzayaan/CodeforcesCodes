
#include<bits/stdc++.h>
using namespace std;
#define lnt long long int
#define ld long double

bool play(lnt pos, vector<lnt>& v){
    lnt num=v[pos];
    for(lnt i=0; i<v.size(); i++){
        if(i==pos) continue;
        if(v[i]>num) return false;
        num+=v[i];
    }
    return true;
}
void random_game(){
    lnt n, index=0; cin>>n;
    vector<lnt> v(n, 0), Indeces;
    for(lnt i=0; i<n; i++) cin>>v[i];
    vector<lnt> b=v;
    sort(v.begin(), v.end());

    lnt f=0, l=n-1, mid=(f+l)/2;
    while(f<=l){
        bool can_win=play(mid, v);
        if(can_win){
            index=mid; l=mid-1;
        }
        else f=mid+1;
        mid=(f+l)/2;
    }

    lnt i=0;
    for(auto p: b){
        if(p>=v[index]) Indeces.push_back(i+1); i++;
    }

    cout<<Indeces.size()<<endl;
    for(auto p: Indeces) cout<<p<<" "; cout<<endl;
}
int main(){
    int test=0;
    cin>>test;
    while(test--) random_game();
    return 0;
}
