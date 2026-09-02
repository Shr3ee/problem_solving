#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	int k;cin>>k;
	k=k%s.length();
	cout<<s.substr(s.length()-k)+s.substr(0,s.length()-k);
}
