#include<stdio.h>
#include"prnarr.c"
//Merge sort tang dan
int mergesort(int* x, int n){
if (n<1 || x==NULL) return -1;
if (n==1) return 1;
else if (n>=2) {
printintarr(x,n);
int x1[n];
for (int j=0; j<n; ++j) x1[j]=x[j];
int tmp=n/2;
mergesort(x1, tmp);
mergesort(x1+tmp, n-tmp);
int a=0;
int b=tmp;
int i=0;
while (i<n){

if (a==tmp) {
  x[i]=x1[b];
  ++b;
  ++i;
}
else if (b==n) {
  x[i]=x1[a];
  ++a;
  ++i;
}
else {
  if (x1[a]<x1[b]){
    x[i]=x1[a];
    ++a;
    ++i;
  }
  else {
    x[i]=x1[b];
    ++b;
    ++i;
  }
}
}
printintarr(x,n);
}
return 0;
}

//Quicksort tăng dần
int qsort(int* x, int n){
if (n<1 || x==NULL) return -1;
if (n==1) return 1;
//Partition step
int tmp=x[n-1];
int i=0; //vị trí mà sẽ đặt phần tử đc chọn
for (int j=0;j<n-1;++j){
if (x[j]<tmp){
int temp=x[j];
x[j]=x[i];
x[i]=temp;
++i;
}
}
x[n-1]=x[i];
x[i]=tmp;

printintarr(x,n);

//Vòng đệ quy
qsort(x,i);
qsort(x+i+1,n-i-1);

printintarr(x,n);
return 0;
}

int main(){
printf("Test Quick Sort\n");
int t1[12]={75, 70, 65, 84, 98, 78, 100, 93, 55, 61, 81, 68};
if(qsort(t1,12)) printf("Test error");
printf("\nTest Merge Sort\n");
int t2[13]={101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
if(mergesort(t2,13)) printf("Test error");
return 0;
}
