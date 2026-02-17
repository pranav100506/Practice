#include<stdio.h>

void level3(){

int x=30;
printf("level3 x: %p\n",&x);
}
void level2(){
int y =20;
printf("level2 y: %p\n",&y);
level3();
}

void level1(){
int z = 10;
printf("levle1 z: %p\n",&z);
level2();
}
int main(){
int a  = 5;
printf("main a: %p\n",&a);
level1();
}
