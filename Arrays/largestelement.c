#include<stdio.h>
#include<stdbool.h>

int largest_element(int a[],int size){
    int largest = -1;
    for(int i =0;i<size;i++){
        if(a[i]>largest){
            largest =a[i];
        }
    }
    return largest;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x = largest_element(arr,n);
    printf("%d",x);
    return 0;
}