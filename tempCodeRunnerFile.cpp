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

// Bubble Sort (Iterative)
void bubble_sort_iterative(vector<int> &arr , int n ) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j] , arr[j + 1]);
            }
        }

        // checking arr at each step    
        cout<<"Array stage: ";
        for(int i = 0 ; i < n ; i ++){
            cout<<arr[i]<<" ";
        }
    cout<<endl;
    }
}

// Bubble Sort (Recursive)
void bubble_sort_recursive(vector<int> &arr, int n) {
    cout<<"Array stage: ";
    for(int i = 0 ; i < n ; i ++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    if (n == 1) return;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubble_sort_recursive(arr, n - 1);
}





int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    sab_changa_si;


    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> arr1 = arr; 
    vector<int> arr2 = arr; 

    cout << "BUBBLE SORT (ITERATIVE): ";
    cout << endl;
    bubble_sort_iterative(arr1 , n );
    cout << "Bubble Sort - Sorted Form (Iterative): ";

    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;


    cout << "BUBBLE SORT (RECURSIVE): "<<endl;
    bubble_sort_recursive(arr2, n);
    cout << "Bubble Sort - Sorted Form (Recursive): ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
