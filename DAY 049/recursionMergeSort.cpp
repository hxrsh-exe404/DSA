#include<iostream>
using namespace std;

void merge(int arr[], int start, int end) {
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values
    int mainArrayIndex = start;
    for(int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    // Free memory
    delete[] first;
    delete[] second;
}

void mergeSort(int arr[], int start, int end) {

    // Base case
    if(start >= end)
        return;

    int mid = start + (end - start) / 2;

    // Left part sort
    mergeSort(arr, start, mid);

    // Right part sort
    mergeSort(arr, mid + 1, end);

    // Merge
    merge(arr, start, end);
}

int main() {

    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}