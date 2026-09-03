#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k;cin>>n>>k;
	cin.ignore();
	string s;
	getline(cin,s);
	cout<<s.substr(n-k,k)+s.substr(0,n-k);
}
