#include<stdio.h>
#include<stdbool.h>

void insert(int a[],int n){

for(int i =1;i<n;i++){
int key = a[i];
int j =i-1;
while(j>=0 && a[j]>key){
a[j+1] = a[j];
j-=1;
}
a[j+1]=key;
}
}
int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i =0;i<n;i++){
scanf("%d",&a[i]);
}
insert(a,n);
for(int i =0;i<n;i++){
printf("%d   ",a[i]);
}
return 0;
}

