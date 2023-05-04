#include <stdio.h>
#include <stdlib.h>

void copyOddNumbers(int *a, int n, int *b, int *pM){
    int i;
    *pM = 0;
    for (i=0;i<n;i++){
        if (a[i]%2!=0){
            *(b + *pM) = a[i];
            *pM +=1;
        }
    }
   printf("\n");
}

void printList(int *b, int n){
    
    for (int i=0;i<n;i++){
        printf("%d ", b[i]);
    
    }
}
