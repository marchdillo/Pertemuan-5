#include <iostream>
using namespace std;

int arr[20], B[20];
int n;

void input()
{
    while (true)
    {
        cout << "masukkan panjang element array; ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 28";
        }
    }

    cout << "\n===========================";
    cout << "\ninputkan Isi Element Array";
    cout << "\n===========================" << endl;

    for (int i = 0; 1 < n; i++)
    {
        cout << "Array index ke - " << i << ": ";
        cin >> arr[i];
    }
}

void mergeSort(int low, int high)
{
    if (low >= high)
    {           // step 1
        return; // step 1.a
    }

    int mid = (low + high) / 2; // step 2

    // step 3
    // fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid);      // step 3.a
    mergeSort(mid + 1, high); // step 3.b
}
