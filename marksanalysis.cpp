//Marks Analysis
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
        int max=*max_element(arr, arr+m);
        int min=*min_element(arr, arr+m);
        float avg=(float)sum/m;
        cout<<max<<" "<<min<<" "<<sum<<" "<<avg<<endl;
    }

}
