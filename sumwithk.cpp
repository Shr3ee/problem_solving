//Sum with k
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m; cin>>n>>m;
	vector<int> v(n);
	for(int i=0;i<n;i++)    cin>>v[i];
	for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] + v[j] == m) {
                cout << v[i] << " " << v[j] << endl;
            }
        }
    }

}
