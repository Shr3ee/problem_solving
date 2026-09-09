#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin>>n>>m;
    cin.ignore();
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<n;i++){
        cout<<count(s2.begin(),s2.end(),s1[i])<<" ";
    }
    
}
