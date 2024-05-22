#include <iostream>

using namespace std;

int linearSearch(int a[], int size, int ele) {
    for (int i=0; i<size; i++) {
        if (a[i] == ele) {
            return i;
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

    int result = linearSearch(a, size, ele);

    (result == -1) ? cout << "The item is not available in the array!" : cout << "The item is available in the index " << result;
    return 0;
}
