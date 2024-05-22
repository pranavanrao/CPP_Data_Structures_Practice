#include <iostream>

using namespace std;

void swapItems(int &i, int &j) {
    int temp = i;
    i = j;
    j = temp;
}

void selectionSort(int a[], int size) {
    int min;
    for (int i=0; i<size-1; i++) {
        min = i;
        for (int j=i+1; j<size; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }

        if (min != i) {
            swapItems(a[min], a[i]);
        }
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

    for (int i = 0; i < size; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}
