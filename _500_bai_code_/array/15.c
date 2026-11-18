#include <stdio.h>
//#include "sort.c"
#include "prnarr.c"

int xep(int* x, int n){
for (int i=0; i<n-1;++i){
  if (i%2!=0){
    if (x[i]<x[i+1]) {
    int tmp=x[i+1];
    x[i+1]=x[i];
    x[i]=tmp;
    }
  }
  else {
    if (x[i]>x[i+1]) {
    int tmp=x[i+1];
    x[i+1]=x[i];
    x[i]=tmp;
    }
  }
}
return 0;
}

int main(){
int t1[7]= {1, 2, 3, 4, 5, 6, 7};
int t2[5]={9, 6, 8, 3, 7};
int t3[6]={6, 9, 2, 5, 1, 4};
printf("test1: I:");
printintarr(t1,7);
xep(t1,7);
printf("O: ");
printintarr(t1,7);
printf("\ntest2, I:");
printintarr(t2,5);
xep(t2,5);
printf("O: ");
printintarr(t2,5);
printf("\ntest3: I:");
printintarr(t3,6);
xep(t3,6);
printf("O: ");
printintarr(t3,6);
return 0;
}
