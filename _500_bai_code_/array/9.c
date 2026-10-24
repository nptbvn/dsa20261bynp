#include <stdio.h>
#include "prnarr.c"
void sort012(int* x, int n){
int c=0; int c1=0;
for (int i=0; i<n; ++i) if (x[i]==0) c++; else if (x[i]==1) c1++;
for (int i=0; i<c; ++i) x[i]=0;
for (int i=c; i<c+c1; ++i) x[i]=1;
for (int i=c+c1; i<n; ++i) x[i]=2;
return;
}
int main(){
int x[12]={ 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 };
printf("test với I:");
printintarr(x,12);
printf("O:");
sort012(x,12);
printintarr(x,12);
return 0;
}
