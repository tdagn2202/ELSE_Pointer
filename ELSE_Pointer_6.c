#include <stdio.h>
#include <stdlib.h>

void Delete(int p, int a[], int *pn){
    *pn-=1;
    for (int i=p+1;i<*pn+2;i++){
        a[i-1]=a[i];
    }
}
