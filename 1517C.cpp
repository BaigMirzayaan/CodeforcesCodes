
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void Fillomino(){
	int n; cin>>n; 
	vector<vector<int>> matrix(n, vector<int> (n, 0)); 

	for(int i=0; i<n; i++) cin>>matrix[i][i];

	for(int i=0; i<n; i++){
		int c=matrix[i][i]; int ii=i, ij=i;

		while(c and ii<n){
			matrix[ii][ij]=matrix[i][i]; c--; 
			while(c and ij>=1 and !matrix[ii][ij-1]){ ij--; matrix[ii][ij]=matrix[i][i]; c--; }
			ii++; if(ii==n and c) ii--;
		}

	}

	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl; 
	}
}
int main(){
	Fillomino();
	return 0;
}
