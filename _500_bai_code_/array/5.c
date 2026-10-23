//Find the duplicate element in a limited range array
#include<stdio.h>
#include "../../ham/sort.c"
#include "../../tests/prnarr.c"

int find(int *x, int n){
qsort(x,n);
for (int i=0;i<n-1;++i){
if (x[i]==x[i+1]) return x[i];
}
return -888;
}

int main(){
int x[5]= { 1, 2, 3, 4, 4 };
printintarr(x,5);
printf("số lặp là:%d\n",find(x,5));
int y[5]={ 1, 2, 3, 4, 2 };
printintarr(y,5);
printf("số lặp là:%d\n",find(y,5));
}
