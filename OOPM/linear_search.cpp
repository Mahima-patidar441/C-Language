#include <iostream>
using namespace std;

int main() {
    int n, key , f = 0;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index " << i << endl;
            f = 1;
            break;
        }
    }

    if(f = 0) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
