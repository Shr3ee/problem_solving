//Right Element
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)    cin>>v[i];
	for (int i=0;i<n;i++) {
	    int max=v[i];
        for (int j=i+1;j<n;j++) {
            if (v[j]>max)   max=v[j];
        }
        if (max==v[i])  cout<<0<<" ";
        else cout<<max<<" ";
    }

}
