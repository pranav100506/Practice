#include<stdio.h>
void printing(int n){
    if(n==0){
        return;
    }
    
 printf("Hello\n");
        
    
    printing(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printing(n);
    // printf("%d",x);
    return 0;
}