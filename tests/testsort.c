#include <stdio.h>
#include "sosanh.c"
#include "prnarr.c"
#include "../ham/sort.c"

int testfx(int (*ham)(int*,int),int* a, int*b, int n){
//printf("sorting...\n");
printf("check T1 với I: ");
printintarr(a,n);
if (ham(a,n)==0) {
if (sosanhintarr(a,b,n)) printf("Qua Test\n\n");
else {
printf("Tạch test, O: ");
printintarr(a,n);
printf("Expected O: ");
printintarr(b,n);
printf("\n");
return 0;
}
}
else {
//printf("I:NULL");
return -1;
}
return 1;
}

void testsort(int (*ham)(int*,int)){
int t1[10]={25, 12, 20, 24, 43, 92, 235, 237, 2024, 2025};
int t1r[10]={12, 20, 24, 25, 43, 92, 235, 237, 2024, 2025};
int t2[8]={24, 25, 12, 2024, 24, 12, 2025, 43};
int t2r[8]={12, 12, 24, 24, 25, 43, 2024, 2025};
int* t3=NULL;
int t4[1]={0};
int t4r[1]={0};
int t5[5]={7, 11, 65, 17, 56};
int t5r[5]={7, 11, 17, 56, 65};
int r=0;
if (!testfx(ham,t1,t1r,10)) r++;
if (!testfx(ham,t2,t2r,8)) r++;
if (testfx(ham,t3,t1r,0)!=-1) r++;
else printf(" Qua test\n\n");
if (!testfx(ham,t4,t4r,1)) r++;
else printf(" Qua test\n\n");
if (!testfx(ham,t5,t5r,5)) r++;
if (r==0) printf("QUA HẾT TẤT CẢ TEST\n");
else printf("TẠCH %d/5 TEST\n",r);
}

int main(){
printf("=====>Test Bubble sort\n");
testsort(bbsort);
printf("\n\n=====>Test Insertion sort\n");
testsort(insertionsort);
printf("\n\n=====>Test Merge sort\n");
testsort(mergesort);
return 0;
}
