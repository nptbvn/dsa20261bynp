// 1.Find a pair with the given sum in an array
#include <stdio.h>
#include "../ham/sort.c"

void findpair(int* x,int n, int s){
bool f=0;
mergesort(x,n);
int l=0;
int r=n-1;
while (l<r){
  if (x[l]+x[r]==s) {printf ("Pair found (%d, %d)\n",x[r],x[l]);f=1;l++;r--;}
  else if (x[l]+x[r]<s) l++;
  else r--;
}
if (f==0) printf("Pair not found\n");
return;
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
