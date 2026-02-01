#include<stdio.h>
void print1_n(int n){
    if(n==0){
        return ;
    }
     
    printf("%d\n",n);
    print1_n(n-1);
  
   
}
int main(){
    int n;
    scanf("%d",&n);
    // int x = prime(n);
    // printf("%d",x);
    print1_n(n);
    return 0;
}