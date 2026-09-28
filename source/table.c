#include <stdbool.h>
#include <stdlib.h>
bool datinit (datable* x, int n){
if (x==NULL || n<=0) return 1;
x->max=n;
x->datable=(datdt**)calloc(n,sizeof(datdt*));
return 0;
}

bool datexpand (datable* x, int n){
if (x==NULL || n<=x->max) return 1;
x->datable=(datdt**)realloc(x->datable,n*sizeof(datdt*));
for (int i=x->max; i<n; ++i){
x->datable[i]=NULL;
}
x->max=n;
return 0;
}

datdt* datsearch (datable* x, int k) {
if (x == NULL || k < 0 || k >= x->max) return NULL;
return x->datable[k];
}

bool dainsert (datable* x, datdt* y) {
if (x==NULL || y==NULL || y->key<0 || y->key>=x->max) return 1;
x->datable[y->key]=y;
return 0;
}

bool dadelete (datable* x, datdt* y) {
if (x==NULL || y==NULL || y->key<0 || y->key>=x->max) return 1;
x->datable[y->key]=NULL;
return 0;
}

bool freedatable (datable* x){
if (x==NULL) return 1;
free(x->datable);
return 0;
}
