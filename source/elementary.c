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
x->dt=(int*)realloc(x->m*sizeof(int));
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

int popintstack(intstack* x){
if (x==NULL || x->n==0) return -88888888;
x->n--;
return x->dt[x->n];
}
