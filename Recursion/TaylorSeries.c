#include <stdio.h>

double e2(int x, int n){
    static double s;
    if(n==0)
        return s;
    s = 1 + x * s/n;
    return e2(x, n-1);
}

double e1(int x, int n){
    static double p=1, f=1;
    double r;

    if(n==0){
        return 1;
    }
    r=e1(x, n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}

/*int main(){
    printf("%lf \n", e2(2, 10));
    return 0;
}*/
