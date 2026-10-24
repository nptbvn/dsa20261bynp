//Insertion sort tang dan
int insertionsort(int* x, int n){
if (n<0 || x==NULL) return -1;
for (int i=1; i<n; ++i){
  int tmp=x[i];
  int j=i-1;
  while (j>=0 && x[j]>tmp){
    x[j+1]=x[j];
    j--;
  }
  x[j+1]=tmp;
}
return 0;
}


//Bubble sort tang dan
int bbsort(int* x, int n){
if (n<0 || x==NULL) return -1;
for (int i=0; i<n; ++i){
  for(int j=0; j<n-1-i; ++j){
    if(x[j+1]<x[j]) {
      int tmp=x[j];
      x[j]=x[j+1];
      x[j+1]=tmp;      
    }
  }
}
return 0;
}

//Merge sort tang dan
int mergesort(int* x, int n){
if (n<1 || x==NULL) return -1;
if (n==1) return 1;
else if (n>=2) {
int x1[n];
for (int j=0; j<n; ++j) x1[j]=x[j];
int tmp=n/2;
mergesort(x1, tmp);
mergesort(x1+tmp, n-tmp);
int a=0;
int b=tmp;
int i=0;
while (i<n){

if (a==tmp) {
  x[i]=x1[b];
  ++b;
  ++i;
}
else if (b==n) {
  x[i]=x1[a];
  ++a;
  ++i;
}
else {
  if (x1[a]<x1[b]){
    x[i]=x1[a];
    ++a;
    ++i;
  }
  else {
    x[i]=x1[b];
    ++b;
    ++i;
  }
}

}
}
return 0;
}

//Quicksort tăng dần
int qsort(int* x, int n){
if (n<1 || x==NULL) return -1;
if (n==1) return 1;
//Partition step
int tmp=x[n-1];
int i=0; //vị trí mà sẽ đặt phần tử đc chọn
for (int j=0;j<n-1;++j){
if (x[j]<tmp){
int temp=x[j];
x[j]=x[i];
x[i]=temp;
++i;
}
}
x[n-1]=x[i];
x[i]=tmp;

//printintarr(x,n);

//Vòng đệ quy
qsort(x,i);
qsort(x+i+1,n-i-1);

//printintarr(x,n);
return 0;
}
