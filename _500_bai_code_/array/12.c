#include <stdio.h>

int fx(int* x, int n){
int r=-1, longest=0, a=0, b=0, c=-1;
for (int i=0; i<n; ++i){
if (x[i]==0){
c=i;
if ((a+b)>longest) {
longest=a+b;
r=c;
}
a=b;
b=0;
}
else {
b++;
}
}
return r;
}

int main(){
int x[10]={ 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 };
int y[10]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
printf("Cần chèn vào x[%d], y[%d]\n",fx(x,10), fx(y,10));
return 0;
}
