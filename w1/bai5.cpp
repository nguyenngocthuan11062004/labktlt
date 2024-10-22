//
// Created by nguye on 10/23/2024.
//

#include "../bai5.h"
#include<stdio.h>
double* maximum(double* a, int size){
    double *max;
    max = a;
    if (a==NULL) return NULL;
    else {
        for(int i=1;i<size;i++) {
            if(a[i]>*max) {
                max=&a[i];
            }
        }
    }
    return max;
}