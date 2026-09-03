#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;cin>>n;
	cin.ignore();
	string s;
	getline(cin,s);
	string S=s;
	std::reverse(s.begin(), s.end());
	if (S==s)   cout<<"True";
	else    cout<<"False";
}

//python
// n=int(input())
// s=input()
// S=s[::-1]
// if(S==s):  print("True")
// else:   print("False")