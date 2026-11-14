#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prnarr.c"

int shuffle(int* x, int n){
if (n<=0) return -1;
if (x==NULL) return -2;
for (int i=n-1; i>=1; --i){
int j=rand()%(i+1);
int tmp=x[i];
x[i]=x[j];
x[j]=tmp;
}
return 0;
}

int main(){
int x[6]={0,1,2,3,4,5};
printf("test, I: ");
printintarr(x,6);
printf("O: ");
if(!shuffle(x,6)) printintarr(x,6);
else printf("loi, ma loi: %d",shuffle(x,6));
return 0;
}
