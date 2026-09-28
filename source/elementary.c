#include<stdlib.h>
#include<stdbool.h>
//stacks
bool initintstack (intstack* x, int n){
if (x==NULL || n<=0) return 1;
x->m=n;
x->n=0;
x->dt=(int*)malloc(n*sizeof(int));
return 0;
}

bool autoexpandintstack (intstack* x){
if (x==NULL) return 1;
x->m*=2;
x->dt=(int*)realloc(x->dt, x->m*sizeof(int));
}
bool intstackempty (intstack* x){
if (x->n==0) return 1;
else return 0;
}

/*
bool doublestackempty (doublestack* x){
if (x.n==0) return 1;
else return 0;
}
*/
/*
bool stringstackempty (stringstack* x){
if (x.n==0) return 1;
else return 0;
}
*/

bool intstackpush(intstack* x, int y){
if (x==NULL) return 1;
x->n++;
if (x->n <= x->m) x->dt[n-1]=y;
else {
autoexpandintstack(x);
x->dt[n-1]=y;
}
return 0;
}

int intstackpop(intstack* x){
if (x==NULL || x->n==0) return -88888888;
x->n--;
return x->dt[x->n];
}

//queues
bool initintqueue(intqueue* x, int n){
if (x==NULL || n<=0) return 1;
x->n=n;
x->dt=(int*)malloc(n*sizeof(int));
x->l=0;
x->f=0;
x->c=0;
return 0;
}

bool enqueueint(intqueue* x, int y){
if (x==NULL) return 1;
if (c==n) return 1;
c++;
x->dt[x->l]=y;
if (l<n) x->l++;
else x->l==0;
return 0;
}

int dequeueint(intqueue* x){
if (x==NULL) return 1;
if (f==l) return 1;
if (f<n) f++;
else x->f==0;
return x->dt[f-1];
}

bool expandqueueint(intqueue* x, int n){
if (x==NULL || n<=x->n) return 1;
x->dt=(int*)realloc(x->dt,n*sizeof(int));
int tmp=n - x->n;
if (l<f) {
if (l>=tmp){
for (int i=0; i<tmp; ++i){
x->dt[n+i]=x->dt[i];
//x->dt[i]=x->dt[i+1];
}
for (int i=0; i<=(l-tmp); ++i){
x->dt[i]=x->dt[l-tmp+i];
}
l-=tmp;
}
else {
for (int i=0; i<tmp; ++i){
x->dt[n+i]=x->dt[i];
//x->dt[i]=x->dt[i+1];
}
l=x->n+tmp;
}
}
x->n=n;
return 0;
}

bool llsearch(ll* x, int k){}
bool llinsert(ll* x, int y){}
bool lldelete(ll* x, int y){}
