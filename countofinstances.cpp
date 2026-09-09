#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,i=0; cin>>n>>m;
    cin.ignore();
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(i=0;i<n-1;i++){
        cout<<count(s2.begin(),s2.end(),s1[i])<<" ";
    }
    cout<<count(s2.begin(),s2.end(),s1[i]);
}