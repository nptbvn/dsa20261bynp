#ifndef ELE_DS
#define ELE_DS 


//stacks
typedef struct {
int n;
int m;
int* dt;
} intstack;

/*
typedef struct {
int n;
double* dt;
} doublestack;
*/
/*
typedef struct {
int n;
char** dt;
} stringstack;
*/
bool initintstack (intstack* x, int n);
bool autoexpandintstack (intstack* x);
bool intstackempty (intstack* x);
bool intstackpush(intstack* x, int y);
int intstackpop(intstack* x);

//queue
typedef struct {
int n;
int f;
int l;
int c;
int* dt;
} intqueue;
bool initintqueue(intqueue* x, int n);
bool enqueueint(intqueue* x, int y);
bool expandqueueint(intqueue* x, int n);
#endif
