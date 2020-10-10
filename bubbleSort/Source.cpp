#include<stdio.h>
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> arr;
    int n, i, j;
    cout << "Number of Elements: ";
    cin >> n;
    cout << "Enter the contents below\n";
    for (int x = 0; x < n; ++x)
    {
        int arrayContent;
        cout << "Enter Content: ";
        cin >> arrayContent;
        arr.push_back(arrayContent);
    }

 cout << "Step by Step Process: " << endl;
   for (i = 0; i < n - 1; ++i)
    {
        int swapped = 0;
        for (j = 0; j < (n - i - 1); ++j) 
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
            for (int ni = 0; ni < n; ++ni) {
                cout << arr[ni] << " ";
            }
            cout << endl;
        }
            if (!swapped) 
            {
                break;
            }
    }

    cout << "Array after sorting : ";
    for (i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}