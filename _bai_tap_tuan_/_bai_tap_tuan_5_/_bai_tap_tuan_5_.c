#include<stdio.h>
#include"../../tests/prnarr.c"
//selectionSort
int selectionSort(int* x, int n){
if (n<0 || x==NULL) return -1;
for (int i=0; i<n-1; ++i){
int min=x[i];
int z=i;
for (int j=i+1; j<n; ++j){
if (x[j]<min){
min=x[j];
z=j;
}
}
x[z]=x[i];
x[i]=min;
printintarr(x,n);
}
return 0;
}

//insertionsort
int insertionsort(int* x, int n){
if (n<0 || x==NULL) return -1;
printintarr(x,n);
for (int i=1; i<n; ++i){
  int tmp=x[i];
  int j=i-1;
  while (j>=0 && x[j]>tmp){
    x[j+1]=x[j];
    j--;
  }
  x[j+1]=tmp;
  printintarr(x,n);
}
return 0;
}

int main(){
printf("Test Seclection Sort\n");
int t1[13]={101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
if(selectionSort(t1,13)) printf("Test error");
printf("\nTest Insertion Sort\n");
int t2[10]={68, 25, 2024, 88, 7, 17, 11, 19, 17, 2025};
if(insertionsort(t2,10)) printf("Test error");
return 0;
}
