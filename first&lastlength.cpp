#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin>>n>>m;
    vector<vector<string>> v(n,vector<string>(m));
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    for (int i=0;i<n;i++){
        cout<<v[i][0].length()<<" "<<v[i][m-1].length()<<endl;
    }
}
