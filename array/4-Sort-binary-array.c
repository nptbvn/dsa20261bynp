// 4. Sort binary array in linear time
#include <stdio.h>
#include "../tests/prnarr.c"
void sortbin(int* x, int n){
int c=0;
for (int i=0; i<n; ++i) if (x[i]==0) c++;
for (int i=0; i<c; ++i) x[i]=0;
for (int i=c; i<n; ++i) x[i]=1;
return;
}

int main(){
int x[8] ={1, 0, 1, 0, 1, 0, 0, 1};
printf("test với array:");
printintarr(x,8);
sortbin(x, 8);
printf("O:");
printintarr(x,8);
return 0;
}
