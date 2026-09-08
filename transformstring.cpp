#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    cin.ignore();
    string s,c="";
    getline(cin,s);
    for(auto i:s){
        if(!isalnum(i))  c+=i;
        else if(isupper(i)) cout<<(char)tolower(i);
        else    cout<<i;
    }
    cout<<c;
}