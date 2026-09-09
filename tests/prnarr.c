int printintarr(int* x, int n){
if (n<1 || x==NULL) return -1;
printf("[");
for (int i=0; i<n-1; ++i){
printf("%d, ",x[i]);
}
printf("%d]\n",x[n-1]);
return 0;
}
