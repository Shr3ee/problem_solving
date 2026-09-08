#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m=0;cin>>n;
    cin.ignore();
    string s,c="";
    getline(cin,s);
    for(auto i:s){
        if (isdigit(i))    m+=(i-'0')*(i-'0');
        else    c+=i;
    }
    int l=c.size();
    int k=m%l;
    if (m%2==0){
        string rr_s=c.substr(l-k,k)+c.substr(0,l-k);
        cout<<rr_s;}
    else{
        string lr_s=c.substr(k,l-k)+c.substr(0,k);
        cout<<lr_s;}
}