//
// Created by nguye on 10/23/2024.
//

#include "bai7.h"
#include <stdio.h>
#include <stdlib.h>
int *a;
int n, tmp;
int main(){
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *a = (int *)calloc(n, sizeof(int));

    for(int i = 0; i < n; i++)
    scanf("%d", a + i);
    printf("The input array is: \n");
    for(int i = 0; i < n; i++)
    printf("%d ", *(a + i));
    printf("\n");

    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] > a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    printf("The sorted array is: \n");
    for(int i = 0; i < n; i++)
    printf("%d ", *(a + i));
    printf("\n");
    delete [] a;
    return 0;
    }