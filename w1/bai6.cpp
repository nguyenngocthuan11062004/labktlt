//
// Created by nguye on 10/23/2024.
//

#include "../bai6.h"
void reversearray(int arr[], int size){
    int l = 0, r = size - 1, tmp;
    while (l<r) {
        tmp=arr[l];
        arr[l]=arr[r];
        arr[r]=tmp;
        l++;
        r--;

    }
}
void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;
    while (l < r) {
        tmp=arr[l];
        arr[l]=arr[r];
        arr[r]=tmp;
        l++;
        r--;
    }
}