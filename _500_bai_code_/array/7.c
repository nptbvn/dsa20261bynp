#include<stdio.h>
#include"prnarr.c"

void check(int* x, int n, int y){
int max=0;
int* x1=NULL;
for (int i=0;i<n;++i){
int s=0;
for (int j=i;j<n;++j){
s+=x[j];
if (s==y){
  if (j-i+1>max) {max=j-i+1; x1=x+i;}
}
}
}
if (max==0) return;
else {printf("largest=%d\nDãy largest:",max); printintarr(x1,max);}
}
int main(){
int x[9]={ 5, 6, -5, 5, 3, 5, 3, -2, 0 };
int t=8;
printf("test1: I=");
printintarr(x,9);
check(x,9,t);
return 0;
}
