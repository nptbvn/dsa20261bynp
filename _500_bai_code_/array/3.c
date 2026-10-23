Print all subarrays with 0 sum
#include<stdio.h>
#include "../../tests/prnarr.c"
void check(int* x, int n){
for (int i=0;i<n;++i){
int s=0;
for (int j=i;j<n;++j){
s+=x[j];
if (s==0) printintarr(x+i,j-i+1);
}
}
}

int main(){
int x[6]={ 4, 2, -3, -1, 0, 4 };
printf("Test1\nI:");
printintarr(x,6);
check(x,6);
int y[10]={ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
printf("\nTest2\nI:");
printintarr(y,10);
check(y,10);
return 0;
}
