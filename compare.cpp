//Compare
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m; cin>>n>>m;
	vector<int> v(n);
	vector<int> u(m);
	for(int i=0;i<n;i++)    cin>>v[i];
	for(int i=0;i<m;i++)    cin>>u[i];
	for(int i=0;i<m;i++){
	    int c=0;
	    for(int j=0;j<n;j++){
	        if (v[j]>u[i])  c++;
	    }
	    cout<<c<<" ";
	}

}
