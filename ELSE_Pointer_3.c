#include <stdio.h>
#include <stdlib.h>

void getMax(float a[], int n, float *pMaxValue, int *pMaxPos){
    for (int i=0;i<n;i++){
        if (n==1) {
            *pMaxValue = a[0];
            *pMaxPos = 0;
        }
        else {
        if (a[i]>*pMaxValue) {
            
            *pMaxValue = a[i];
            *pMaxPos = i;
        }
    }
    }

} 
