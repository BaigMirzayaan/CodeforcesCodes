
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void contiguous_string(){
	string s; cin>>s;
	int len=INT_MAX;

	vector<pair<char, int>> str;
	for(int i=0; i<s.size(); i++){
		pair<char, int> p; int ctr=0;
		p.first=s.at(i); 
		while(i+1<s.size()&&s.at(i)==s.at(i+1)){ ctr++; i++;}
		p.second=ctr+1; str.push_back(p);
	}

	for(int i=1; i<str.size()-1; i++){
		int char_sum=str[i].first+str[i-1].first+str[i+1].first;

		if(char_sum==(int)('1'+'2'+'3')) len=min(len, str[i].second+2);
	}

	len=len==INT_MAX?0:len;
	cout<<len<<endl;
}
int main(){
	int test=0;
	cin>>test;
	while(test--) contiguous_string();
	return 0;
}
