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

// Heapify function for Heap Sort
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }

    // Checking array at each step
    cout << "Array stage: ";
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
}

// Heap Sort (Iterative)
void heapSort(vector<int>& arr, int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

// Heap Sort (Recursive)
void heapSortRecursive(vector<int>& arr, int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    function<void(int)> recursiveSort = [&](int size) {
        if (size <= 1) return;

        swap(arr[0], arr[size - 1]);
        heapify(arr, size - 1, 0);
        recursiveSort(size - 1);
    };

    recursiveSort(n);
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

    // Iterative Heap Sort
    vector<int> arr1 = arr;
    cout << "HEAP SORT (ITERATIVE): " << endl;
    heapSort(arr1, n);
    cout << "Heap Sort - Sorted Form (Iterative): ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Recursive Heap Sort
    vector<int> arr2 = arr;
    cout << "HEAP SORT (RECURSIVE): " << endl;
    heapSortRecursive(arr2, n);
    cout << "Heap Sort - Sorted Form (Recursive): ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
