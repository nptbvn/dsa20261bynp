#include<stdio.h>
#include"prnarr.c"
void merge(int*x,int nx,int*y, int ny){
int x1=0;
while (x1!=nx){
if (x[x1]>y[0]) {
int tmp=x[x1];
x[x1]=y[0];
int z=1;
if (tmp<y[1]) {y[0]=tmp;z=0;}
if (z) for (int i=2; i<ny;++i){
if (y[i-1]<tmp && tmp<y[i]){
for (int j=0; j<i;++j) y[j]=y[j+1];
y[i-1]=tmp;
z=0;
break;
}}
if (z) {
for (int j=0; j<ny-1;++j) y[j]=y[j+1];
y[ny-1]=tmp;
}
x1++;
}
else {
x1++;
}
}
}
int main(){
int x[5]= { 1, 4, 7, 8, 10 };
int y[6] = { 2, 2, 3, 3, 5, 9};
printf("test1, input:\nX=");
printintarr(x,5);
printf("Y=");
printintarr(y,6);
merge(x,5,y,6);
printf("\noutput:\nX=");
printintarr(x,5);
printf("Y=");
printintarr(y,6);
return 0;
}
