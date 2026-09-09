int sosanhintarr(int* a, int *b, int n){
if (a==NULL && b==NULL) return 1;
else if (a==NULL && b!=NULL) return -1;
else if (a!=NULL && b==NULL) return -1;
else {
  for (int i=0; i<n; ++i){
  if (a[i]!=b[i]) return 0;
  }
}
return 1;
}
