#include<stdio.h>
#include<stdbool.h>

void merge(int a[], int low ,int mid, int high){
int temp[high -low+1 ];
int left = low;
int right = mid+1;
int k =0;
while(left<=mid && right<=high){
if(a[left] <a[right]){
temp[k++]=a[left++];
}
else{
temp[k++]=a[right++];
}
}
while(left<=mid){
temp[k++] = a[left++];
}
while(right<=high){
temp[k++]=a[right++];
}
for(int i =low;i<=high;i++){
a[i]= temp[i-low];
}
}


void mergesort(int a[], int low , int high){
if(low>=high){
return;}
int mid = (low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,mid,high);
}
int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i =0;i<n;i++){
scanf("%d",&a[i]);
}
int low = 0;
int high = n-1;
mergesort(a,low,high);
for(int i =0;i<n;i++){
printf("%d  ",a[i]);
}
return 0;
}
