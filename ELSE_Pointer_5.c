#include <stdio.h>
void Insert(int x, int p, int a[], int *pn){
	int i;
	for(i=*pn; i>=p; i--)
	a[i+1]=a[i];
	a[p]=x;
	(*pn)++;
}
