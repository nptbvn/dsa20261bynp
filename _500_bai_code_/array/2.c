//Check if a subarray with 0 sum exists or not
#include<stdio.h>
#include "../../tests/prnarr.c"
int check(int* x, int n){
for (int i=0;i<n;++i){
int s=0;
for (int j=i;j<n;++j){
s+=x[j];
if (s==0) return 1;
}
}
return 0;
}

int main(){
int x[6]={ 4, 2, -3, -1, 0, 4 };
printf("\nTest1\nI:");
printintarr(x,6);
if(check(x,6)) printf("có");
else printf("ko có");
int y[10]={ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
printf("\nTest2\nI:");
if (check(y,10)) printf("có");
else printf("ko có");
return 0;
}
