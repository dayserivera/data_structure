#include<stdio.h>

void TOH(int n, int A, int B, int C){
    if(n>0){
        TOH(n-1, A, C, B);
        printf("(%d, %d)\n", A, C);
        TOH(n-1, B, A, C);
    }
}

int main(){
    //TOH(3, 1, 2, 3);
    for(int i = 0; i < 3; ++i){
        printf("%d \n", i);
    }
}
