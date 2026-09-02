#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, x;
    int k;
    getline(cin,s);
    cin>>x;
    cin>>k;
    string result="";
    for (int i=0;i<s.length();i++) {
        result+=s[i];
        if ((i + 1)%k==0 && i!=s.length()-1) {
            result += x;
        }
    }
    cout<<result;
    return 0;
}