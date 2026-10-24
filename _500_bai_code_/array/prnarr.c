int printintarr(int* x, int n){
if (x==NULL && n==0) printf("NULL");
if (n<1) return -1;
printf("[");
for (int i=0; i<n-1; ++i){
printf("%d, ",x[i]);
}
printf("%d]\n",x[n-1]);
return 0;
}
