#include<stdio.h>
#include<math.h>
void print_divisors( int n){
    int limit =(int)sqrt(n);
    for(int i=1;i<=limit;i++){
        if(n%i==0){
            printf("%d\n",i);
                if(i!=n/i){
                    printf("%d\n",n/i);
                }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    print_divisors(n);
    return 0;
}