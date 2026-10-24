#include<stdio.h>
#include"prnarr.c"
void find(int* x, int n){
int max=1;
int* x1;
x1=x;
for (int i=0; i<n; ++i){
int s=x[i];
int m1=x[i];
int m2=x[i];
  for (int j=i; j<n;++j){
    int z=0;
    for (int k=i; k<j;++k){
    if (x[j]==x[k]) {z=1;break;}
    }
    if(z) break;
    else if (x[j]<m1) m1=x[j];
    else if (x[j]>m2) m2=x[j];
    s+=x[j];
    if (j-i+1>max && (m2-m1)==(j-i)) {
    max=j-i+1;
    x1=x+i;
    }
  }
}
printf("max=%d\nlargest subarray là: ",max);
printintarr(x1,max);
}

int main(){
int x[8]={ 2, 0, 2, 1, 4, 3, 1, 0 };
printf("t1,I:");
printintarr(x,8);
int y[11]={1,7,2,5,2,4,4,3,1,2,5};
find(x,8);
printf("t2,I:");
printintarr(y,11);
find(y,11);
return 0;
}
