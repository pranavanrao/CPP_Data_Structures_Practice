#include <iostream>

using namespace std;

int binarySearch(int a[], int low, int high, int ele) {
    while (low < high) {
        int mid = low + (high - low)/2;

        if (a[mid] == ele) {
            return mid;
        }

        if (a[mid] < ele) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;

    int a[size];
    cout << endl << "Enter the array items : " << endl;

    for (int i=0; i<size; i++) {
        cout << "Item index " << i << " : ";
        cin >> a[i];
    }

    cout << "The array is : ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    int ele;
    cout << endl << "Enter the item to be searched : ";
    cin >> ele;
    cout << endl;

    int result = binarySearch(a, 0, size-1, ele);

    (result == -1) ? cout << "The item is not available in the array!" : cout << "The item is available in the index " << result;
    return 0;
}
