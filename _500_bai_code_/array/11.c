#include <stdio.h>
#include "prnarr.c"
int merge(int* a, int* b, int m, int n){
if(m<n || m<0) return -1;
int tmp=0;
for (int i=m-1; i>=0; --i){
if (a[i]!=0) {a[m-tmp-1]=a[i];tmp++;}
}
for (int i=0; i<n; ++i) a[i]=0;
if (tmp!=m-n) return -2;
int a1=n;
int b1=0;
int i=0;
while (i<m){
if (a1==m) {
  a[i]=b[b1];
  ++b1;
  ++i;
}
else if (b1==n) {
  a[i]=a[a1];
  ++a1;
  ++i;
}
else {
  if (a[a1]<b[b1]){
    a[i]=a[a1];
    ++a1;
    ++i;
  }
  else {
    a[i]=b[b1];
    ++b1;
    ++i;
  }
}
}
return 0;
}

int main(){
int a[9]={ 0, 2, 0, 3, 0, 5, 6, 0, 0 };
int b[5]={ 1, 8, 9, 10, 15 };
printf("Test, input:\nX=");
printintarr(a,9);
printf("Y=");
printintarr(b,5);
if (merge(a,b,9,5)) {printf("Loi ham merge: %d\n",merge(a,b,9,5)); return -1;} 
printf("\nOutput:\nX=");
printintarr(a,9);
printf("Y=");
printintarr(b,5);
return 0;
}
