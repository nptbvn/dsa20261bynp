#include<stdio.h>
#include"prnarr.c"
void find(int*x,int n){
int max=0;
int* x1=NULL;
for (int i=0;i<n;++i){
int n1=0;
int n0=0;
for (int j=i;j<n;++j){
if(x[j]) n1++;
else n0++;
if (n1==n0){
  if ((2*n1)>max) {max=2*n1; x1=x+i;}
}
}
}
if (max==0) return;
else {printf("largest=%d\nDãy largest:",max); printintarr(x1,max);}
}
int main(){
int x[7]={ 0, 0, 1, 0, 1, 0, 0 };
printf("test1: I=");
printintarr(x,7);
find(x,7);
return 0;
}
