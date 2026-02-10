#include<stdio.h>
#include<stdbool.h>
void bubble(int a[],int n){
for(int i =0;i<n;i++){
for(int j=0;j<n-1-i;j++){
if(a[j]>a[j+1]){
int temp =a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
}
}
// comparison based sorting
int main()


{


int n ;


scanf("%d",&n);


int arr[n];


for(int i =0;i<n;i++){


scanf("%d",&arr[i]);


}


bubble(arr,n);





for(int i =0;i<n;i++){


printf("%d  ",arr[i]);


}


return 0;


}


