#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"../../ham/minmax.c"
typedef struct {
int id;
int n;
int max;
int* x;
} cot;

bool initcot (cot** x, int id, int m){
*x=(cot*)malloc(sizeof(cot));
if (x==NULL || *x==NULL || m<0) return 1;
(*x)->id=id;
(*x)->max=m;
(*x)->x=(int*)malloc(m*sizeof(int));
return 0;
}

bool expandcot(cot* x, int n){
if (x==NULL || n<=x->max) return 1;
x->x=(int*)realloc(x->x,n*sizeof(int));
x->max=n;
return 0;
}

bool diencot (cot* x, int n){
if (x==NULL || n<0 || n> x->max) return 1;
for (int i=0; i<n; ++i){
x->x[i]=n-i;
}
x->n=n;
return 0;
}

bool print3cot (cot* x, cot* y, cot* z){
if (x==NULL || y==NULL || z==NULL) return 1;
int n=max(x->n,y->n,z->n);
for (int i=0; i<n;++i){
if ((x->n-n+i)>=0) printf("%d\t\t",x->x[n-i-1]);
else printf("\t\t");
if ((y->n-n+i)>=0) printf("%d\t\t",y->x[n-i-1]);
else printf("\t\t");
if ((z->n-n+i)>=0) printf("%d\t\t",z->x[n-i-1]);
else printf("\t\t");
printf("\n");
}
printf("Cột %d\t\tCột %d\t\tCột %d\n\n", x->id, y->id,z->id);
return 0;
}

bool chuyendia(cot* x, cot* y){
if (x==NULL || y==NULL || x->n==0 || y->n==y->max) return 1;
y->x[y->n]=x->x[x->n-1];
y->n++;
x->n--;
return 0;
}

void xep (cot* x, cot* y, cot* z, int n){
if (n<=0) printf("error");
if (n>1) {
xep(x,z,y,n-1);
if (chuyendia(x,z)) {printf("Lỗi chuyển đĩa"); return;}
if (print3cot(x,y,z)) {printf ("Lỗi print cột"); return;}
xep(y,x,z,n-1);
}
else {
if(chuyendia(x,z)) {printf("Lỗi chuyển đĩa"); return;}
if(print3cot(x,y,z)) {printf("Lỗi print cột"); return;}
}
}

int main(){
cot *x,*y,*z;
int n=11;
if (initcot(&x,1,n)) printf("Lỗi init x");
if (initcot(&y,2,n)) printf("Lỗi init y");
if (initcot(&z,3,n)) printf("Lỗi init z");
diencot (x, n);
y->n=0;
z->n=0;
if (print3cot(x,y,z)) printf("looix in");
xep(x,y,z,n);
return 0;
}
