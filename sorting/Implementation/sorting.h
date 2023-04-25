#pragma once

#include <iostream>
#include <vector>

using namespace std;

void buildMaxHeap(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[(i - 1) / 2])
        {
            int j = i;

            while (arr[j] > arr[(j - 1) / 2])
            {
                swap(arr[j], arr[(j - 1) / 2]);
                j = (j - 1) / 2;
            }
        }
    }
}

vector<int> bubble_sort(vector<int> arr) {
    vector<int> v = arr;
	int n = arr.size();
	int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (v[j] < v[i])
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    return v;
}


vector<int> insertion_sort(vector<int> arr) {
    int i, key, j;
    int n = arr.size();
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
}

void timsort(vector<int> arr) {

}

vector<int> selection_sort(vector<int> arr) {
    int i, j, min_idx;
    int n = arr.size();
    for (i = 0; i < n - 1; i++)
    {

        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        if (min_idx != i){

            swap(arr[min_idx], arr[i]);
        }
    }
    return arr;
}

vector<int> heap_sort(vector<int> arr) {
    int n = sizeof(arr) / sizeof(arr[0]);
    buildMaxHeap(arr, n);
 
    for (int i = n - 1; i > 0; i--)
    {

        swap(arr[0], arr[i]);

        int j = 0, index;
         
        do
        {
            index = (2 * j + 1);

            if (arr[index] < arr[index + 1] &&
                                index < (i - 1))
                index++;

            if (arr[j] < arr[index] && index < i)
                swap(arr[j], arr[index]);
         
            j = index;
         
        } while (index < i);
    }
    return arr;
}

vector<int> shell_sort(vector<int> arr) {
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {

            int temp = arr[i];

            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
    vector<int> v = arr;
    return v;
}
