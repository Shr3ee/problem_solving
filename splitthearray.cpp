#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    int max=*max_element(v.begin(), v.end());
    int min=*min_element(v.begin(), v.end());
    int a=find(v.begin(),v.end(),max) - v.begin();
    int b=find(v.begin(),v.end(),min) - v.begin();
    vector<int> v1;
    v1.insert(v1.begin(),v.begin()+b,v.begin()+a);
    v.erase(v.begin()+b,v.begin()+a);
    v.insert(v.begin(),v1.begin(),v1.end());
    for(int i=0;i<n;i++)    cout<<v[i]<<" ";
}