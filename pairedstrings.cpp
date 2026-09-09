#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=v[0].length();
    for(int i=0;i<n/2;i++){
        string s=v[i].substr(0,i+1)+v[n-1-i].substr(l-i-1,i+1);
        cout<<s<<" ";
    }
    
}