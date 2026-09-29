int min(int x, int y, int z){
int min=x;
if (y > min) min=y;
if (z > min) min=z;
return min;
}
int max(int x, int y, int z){
int max=x;
if (y > max) max=y;
if (z > max) max=z;
return max;
}
