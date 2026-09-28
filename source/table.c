#include <stdbool.h>
#include <stdlib.h>
bool datinit (datable* x, int n){
if (x==NULL || n<=0) return 1;
x->max=n;
x->datable=(tabledt**)calloc(n,sizeof(tabledt*));
return 0;
}

bool datexpand (datable* x, int n){
if (x==NULL || n<=x->max) return 1;
x->datable=(tabledt**)realloc(x->datable,n*sizeof(tabledt*));
for (int i=x->max; i<n; ++i){
x->datable[i]=NULL;
}
x->max=n;
return 0;
}

tabledt* datsearch (datable* x, int k) {
if (x == NULL || k < 0 || k >= x->max) return NULL;
return x->datable[k];
}

bool dainsert (datable* x, tabledt* y) {
if (x==NULL || y==NULL || y->key<0 || y->key>=x->max) return 1;
x->datable[y->key]=y;
return 0;
}

bool dadelete (datable* x, tabledt* y) {
if (x==NULL || y==NULL || y->key<0 || y->key>=x->max) return 1;
x->datable[y->key]=NULL;
return 0;
}

bool freedatable (datable* x){
if (x==NULL) return 1;
free(x->datable);
return 0;
}

//chaning hash
bool chhashinit (chhash* x,int n){
if (x==NULL || n<=0) return 1;
x->max=n;
x->dt=(ll*)calloc(n,sizeof(ll));
}





bool chhashexpand(chhash* x,int n){
if (x==NULL || n<=x->max) return 1;
x->dt=(ll*)realloc(x->dt,n*sizeof(ll));
for (int i=x->max; i<n; ++i) x->dt[i]=NULL;
}

int chhashdivfunction(int x, int max){
return x%max;
}

llnode* chhashsearch(chhash* x, int n){
if (x == NULL || n < 0 ) return NULL;
int tmp=chhashdivfunction(n, x->max);
return llsearch(x->dt+tmp, int n);
}

bool chhashinsert(chhash* x, tabledt* y){

bool llinsert(ll* x, llnode* y);
}

bool freechhash(chhash* x){}
