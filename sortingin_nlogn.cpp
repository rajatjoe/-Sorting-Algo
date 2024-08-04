#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sab_changa_si ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tc int t; cin >> t; while (t--)
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define all(v) (v).begin(), (v).end()
#define rall(a) (a).rbegin(), (a).rend()
#define f(i, n) for (int i = 0; i < n; i++)
const int MOD = 1e9 + 7;

// Merge function for Merge Sort
void merge(vector<int> &arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }

    while (j < n2) {
        arr[k++] = R[j++];
    }

    // Checking arr at each step
    cout << "Array stage: ";
    for (int k = 0; k < arr.size(); k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
}

// Merge Sort function
void merge_sort(vector<int> &arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    sab_changa_si;

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> arr1 = arr;

    cout << "MERGE SORT: " << endl;
    merge_sort(arr1, 0, n - 1);
    cout << "Merge Sort - Sorted Form: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
