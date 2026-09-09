// 1.Find a pair with the given sum in an array
#include <stdio.h>
#include "../ham/sort.c"

void findpair(int* x,int n, int s){
bool f=0;
mergesort(x,n);
for (int i=0; i<n; ++i){
if (x[i]>s/2) {if (f==0) printf("Pair not found\n");return;}
for (int j=n-1; j>i; --j){
  if (x[i]+x[j]==s) {printf ("Pair found (%d, %d)\n",x[j],x[i]);f=1;}
  else if (x[i]+x[j]<s) break;
}
}
}

int main(){
int n;
printf("Test1:\n");
int x[6]={8,7,2,5,3,1};
findpair(x,6,10);
printf("Test2:\n");
int y[6]={5,2,6,8,1,9};
findpair(y,6,12);
return 0;
}
