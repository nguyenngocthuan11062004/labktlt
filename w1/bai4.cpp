//
// Created by nguye on 10/23/2024.
//

#include "bai4.h"
int counteven(int* arr, int size){
    int count = 0;
    for(int i=0;i<size;i++){
    if(arr[i]%2==0){
    count++;
    }
    }

    return count;
}