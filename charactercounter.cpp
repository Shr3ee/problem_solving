#include <bits/stdc++.h>
using namespace std;

int main() {
	int k,n,m,c=0;
	cin>>k>>n>>m;
	cin.ignore();
	string s;
	getline(cin,s);
	for(auto i:s){
	    if((int)i>=n && (int)i<=m){
	        c++;
	    }
	}
	cout<<c;

}