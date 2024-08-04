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

// Insertion Sort (Iterative)
void insertion_sort_iterative(vector<int> &arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

        // checking arr at each step
        cout << "Array stage: ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

// Insertion Sort (Recursive)
void insertion_sort_recursive(vector<int> &arr, int n) {
    if (n <= 1) return;

    insertion_sort_recursive(arr, n - 1);

    int key = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;

    // checking arr at each step
    cout << "Array stage: ";
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
}

int main() {
    sab_changa_si;

    cout<<"Enter the number of elements :"<<endl;
    int n;
    cin >> n;
    cout<<"Enter the elements"<<endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> arr1 = arr;
    vector<int> arr2 = arr;

    cout << "INSERTION SORT (ITERATIVE): " << endl;
    insertion_sort_iterative(arr1, n);
    cout << "Insertion Sort - Sorted Form (Iterative): ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "INSERTION SORT (RECURSIVE): " << endl;
    insertion_sort_recursive(arr2, n);
    cout << "Insertion Sort - Sorted Form (Recursive): ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
