#include <iostream>

using namespace std;

void swapItems(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void selectionSort(int a[], int size) {
    for (int i=0; i<size; i++) {
        for (int j=i+1; j<size; j++) {
            if (a[j] < a[i]) {
                swapItems(a, i, j);
            }
        }

        cout << a[i] << " ";
    }
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

    cout << "The unsorted array : ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    cout << endl << "The sorted array : ";
    selectionSort(a, size);
    return 0;
}
