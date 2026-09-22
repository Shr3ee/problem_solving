#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    cin.ignore();
    string s; getline(cin,s);
    // for(int i=0;i<n;i++){
    //     int j=i+1,c=0;
    //     if(count(s.begin()+i+1, s.end(), s[i])==0)    cout<<-1;
    //     else{
    //         while(s[i]!=s[j] && j<n){
    //         c++;
    //         j++;}
    //         cout<<c;
    //     }
    //     if(i<n-1)   cout<<" ";
    // }
    for(int i=0;i<n;i++){
        int c=-1;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){ 
                c=j-i-1;
                break;}
        }
        cout<<c;
        if(i<n-1)   cout<<" ";
    }
}