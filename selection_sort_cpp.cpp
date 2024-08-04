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

// Iterative Selection Sort
void selection_sort(vector<int> &arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);

        // Checking array at each step
        cout << "Array stage: ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

// Recursive Selection Sort
void selection_sort_recursive(vector<int> &arr, int n, int start = 0) {
    if (start >= n - 1) return;

    int min_idx = start;
    for (int i = start + 1; i < n; i++) {
        if (arr[i] < arr[min_idx]) {
            min_idx = i;
        }
    }

    if (min_idx != start) {
        swap(arr[start], arr[min_idx]);
    }

    // Checking array at each step
    cout << "Array stage: ";
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    selection_sort_recursive(arr, n, start + 1);
}

int main() {
    sab_changa_si;
    cout<<"Enter the number of elements you want to sort"<<endl;

    int n;
    cin >> n;
    cout<<"Enter the elements:"<<endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Iterative Selection Sort
    vector<int> arr1 = arr;
    cout << "SELECTION SORT (ITERATIVE): " << endl;
    selection_sort(arr1, n);
    cout << "Selection Sort - Sorted Form (Iterative): ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Recursive Selection Sort
    vector<int> arr2 = arr;
    cout << "SELECTION SORT (RECURSIVE): " << endl;
    selection_sort_recursive(arr2, n);
    cout << "Selection Sort - Sorted Form (Recursive): ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
