#include <iostream>
#include <vector>


int Binary_Search(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return -1;
}

int Ternary_Search(int arr[], int key, int l, int r)
{
    if (r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (arr[mid1] == key) {
            return mid1;
        }
        if (arr[mid2] == key) {
            return mid2;
        }
        if (key < arr[mid1]) {
            return Ternary_Search( arr, key, l, mid1 - 1);
        }
        else if (key > arr[mid2]) {
            return Ternary_Search(arr, key, mid2 + 1, r);
        }
        else {
            return Ternary_Search(arr,key,mid2 - 1, mid1 + 1);
        }
    }
    return -1;
}