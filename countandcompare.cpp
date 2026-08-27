#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,e=0,o=0; cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)    cin>>v[i];
	for(int i=0;i<n;i++){
	    if (v[i]%2==0)  e++;
	    else    o++;
	}
	if (e>o)    cout<<"Even";
	else if (o>e)   cout<<"Odd";
	else    cout<<"Tie";

}
