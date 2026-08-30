//Group salary
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int m; cin>>m;
        int arr[m];
        for(int i=0;i<m;i++)    cin>>arr[i];
        int sum=accumulate(arr, arr+m, 0);
        cout<<sum<<endl;
    }
}
