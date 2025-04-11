#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr1(n);
    vector<int> arr2(k);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> arr2[i];
    }

    for (int target : arr2) {
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr1[mid] == target) {
                cout << "YES" << endl;
                break;
            } else if (arr1[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        if (left > right) {
            cout << "NO" << endl;
        }
    }
    return 0;
}
