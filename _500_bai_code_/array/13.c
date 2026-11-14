#include <stdio.h>

int find(int*x, int n){
if (n<=1) return x[0]*x[0];
else if (n==2) return x[0]*x[1];
int r;
int min1=(x[1]>x[0]?x[0]:x[1]);
int min2=(x[1]<x[0]?x[0]:x[1]);
int max1=min2;
int max2=min1;
for (int i=2; i<n;++i){
if (x[i]<min2){
  if (x[i]<min1) {min2=min1; min1=x[i];}
  else min2=x[i];
}
else if (x[i]>max2){
  if (x[i]>max1) {max2 =max1; max1= x[i];}
  else max2=x[i];
}
}
return ((max1*max2)>(min1*min2))?max1*max2:min1*min2;
}

int main(){
int x[5]={-10, -3, 5, 6, -2};
printf("test1: {-10, -3, 5, 6, -2}, output: %d\n",find(x,5));
int y[1]={25};
printf("test2: {25}, output: %d\n",find(y,1));
x[3]=0;
x[0]=0;
printf("test3: {0, -3, 5, 0, -2}, output: %d\n",find(x,5));
return 0;
}
