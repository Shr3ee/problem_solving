#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)    cin>>v[i];
	cout<<v[0]+v[1]<<endl;
	cout<<v[n-1]+v[n-2];

}
