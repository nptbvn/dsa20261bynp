#include <stdio.h>
#include "sort.c"
#include "prnarr.c"

void find(int* x, int n){
mergesort(x,n);
printintarr(x,n);
int tmp=(n%2==0)?n/2:n/2+1;
for (int i=0;i<tmp;++i){
if (x[i]==x[i+n/2]) {printf("%d",x[i]); break;}
}
return;
}

int main(){
int t1[11]= {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2};
int t2[5]={9, 6, 8, 3, 7};
int t3[6]={6, 9, 2, 5, 1, 4};
printf("test1: I:");
printintarr(t1,11);
printf("O: ");
find(t1,11);
printf("\ntest2, I:");
printintarr(t2,5);
printf("O: ");
find(t2,5);
printf("\ntest3: I:");
printintarr(t3,6);
find(t3,6);
return 0;
}
