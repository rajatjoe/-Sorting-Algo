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
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Checking array at each step
    cout << "Array stage: ";
    for (int i = left; i <= right; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Merge Sort (Iterative)
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

// Merge Sort (Recursive)
void mergeSortRecursive(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSortRecursive(arr, left, mid);
        mergeSortRecursive(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    sab_changa_si;
    cout << "Enter the number of elements you want to sort" << endl;

    int n;
    cin >> n;
    cout << "Enter the elements:" << endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Iterative Merge Sort
    vector<int> arr1 = arr;
    cout << "MERGE SORT (ITERATIVE): " << endl;
    mergeSort(arr1, 0, n - 1);
    cout << "Merge Sort - Sorted Form (Iterative): ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Recursive Merge Sort
    vector<int> arr2 = arr;
    cout << "MERGE SORT (RECURSIVE): " << endl;
    mergeSortRecursive(arr2, 0, n - 1);
    cout << "Merge Sort - Sorted Form (Recursive): ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
