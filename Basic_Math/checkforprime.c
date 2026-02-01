#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool prime( int n){
    int limit =(int)sqrt(n);
    if(n<=1){
        return false;
    }
    for(int i=2;i<=limit;i++){
        if(n%i==0){
            // printf("%d\n",i);
            //     if(i!=n/i){
            //         printf("%d\n",n/i);
            //     }
            return false;
        }
        
    }
    return true;
}
int main(){
    int n;
    scanf("%d",&n);
    int x = prime(n);
    printf("%d",x);
    return 0;
}