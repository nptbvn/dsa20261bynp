#ifndef DS_TABLE
#define DS_TABLE


#include<stdbool.h>
#include "elementary.h"
//direct-address tables
typedef struct {
int key;
int dt;
} tabledt;

typedef struct {
int max;
tabledt** datable;
} datable;

bool datinit (datable* x, int n);
bool datexpand (datable* x, int n);
tabledt* datsearch (datable* x, int k);
bool dainsert (datable* x, tabledt* y);
bool dadelete (datable* x, tabledt* y);
bool freedatable (datable* x);

//hash tables (with chaning)
typedef struct {
int max;
ll* dt;
} chhash;

bool chhashinit (chhash* x,int n);
bool chhashexpand(chhash* x,int n);
int chhashdivfunction(int x,int max);
ll* chhashsearch(chhash* x, int n);
bool chhashinsert(chhash* x, tabledt* y);
bool freechhash(chhash* x);
#endif
