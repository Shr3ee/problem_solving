#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int profit = arr[j] - arr[i];

            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }

    cout << maxProfit << endl;

    return 0;
}