//
// Created by HAO on 2023/5/7.
//

#include <stdio.h>

int pow(int m, int n){
    if(n == 0){
        return 1;
    }
    return pow(m,n-1) * m;
}


int pow2(int m, int n){
    if(n == 0){
        return 1;
    } else if(n % 2 == 0){
        return pow2(m * m,n / 2);
    } else{
        return pow2(m * m, n /2) * m ;
    }
}


//计算以x的e次幂
double e(int x,int n){
    static double p = 1,f = 1;
    double r;
    if(n == 0){
        return 1;
    } else{
        r = e(x,n-1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}

//计算以x的e次幂
double e2(int x,int n){
    double s = 1.0;
    for ( ; n > 0 ;  n--) {
        s = 1 + x * s/ n  ;
    }
    return s;
}

//计算以x的e次幂
double e3(int x, int n){
    static double result = 1;
    if(n == 0){
        return result;
    } else{
        result = 1 + x * result / n ;
        return e3(x,n-1);
    }

}

//int main(){
//    printf("%d\n",pow(2,10));
//    printf("\n-----------------\n");
//    printf("%d\n",pow2(2,9));
//    printf("\n-----------------\n");
//    printf("%f\n",e(2,15));
//    printf("\n-----------------\n");
//    printf("%f\n",e2(2,15));
//    printf("\n-----------------\n");
//    printf("%f\n",e3(2,10));
//}
