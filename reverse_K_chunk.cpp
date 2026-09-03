#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k; cin>>n>>k;
	cin.ignore();
	string s;
	getline(cin,s);
	string c="";
	for(int i=0;i<n;i=i+2*k){
	    c+=s.substr(i,k);
	    string temp=s.substr(k+i,k);
	    reverse(temp.begin(),temp.end());
	    c+=temp;
	}
	cout<<c;
}