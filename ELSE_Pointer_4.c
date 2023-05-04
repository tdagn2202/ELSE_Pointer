#include <stdio.h>
#include <stdlib.h>

int *getSequence(int n, int d){
    int *sum=malloc(sizeof(int)*n);
    for (int i=0;i<n;i++){
        sum[i] = i*d +1;
    }
    return sum;
}
