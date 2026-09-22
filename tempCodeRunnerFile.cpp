#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    cin.ignore();
    string s; getline(cin,s);
    for(int i=0;i<n;i++){
        int c=-1;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j])  c=i-j-1;}
        cout<<c;
        if(i<n-1)   cout<<" ";
    }
}