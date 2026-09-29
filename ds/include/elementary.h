#ifndef ELE_DS
#define ELE_DS 
#include<stdbool.h>

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

//linked lists
typedef struct {
llnode* prev;
llnode* next;
int key;
int dt;
} llnode;





typedef struct {
llnode* head;
} ll;

bool llsearch(ll* x, int k);
bool llinsert(ll* x, llnode* y);
bool lldelete(ll* x, llnode* y);

#endif
