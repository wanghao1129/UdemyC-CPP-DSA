//
// Created by HAO on 2023/5/7.
//

#include <stdio.h>

int fib(int n){
    if (n <= 1){
        return n;
    } else{
        return fib(n-2) + fib(n -1);
    }
}

int Ifib(int n){
    int t0 = 0, t1 = 1, s;
    if(n <= 1){
        return n;
    } else{
        for (int i = 2; i <= n; ++i) {
            s = t0 + t1;
            t0 = t1;
            t1 = s;
        }
        return s;
    }

};

int F[10];


int Mfib(int n){
    if(n <= 1){
        F[n] = n;
        return F[n];
    } else{
        if(F[n-2] == -1){
            F[n-2] = Mfib(n-2);
        }
        if(F[n-1] == -1){
            F[n-1] = Mfib(n-1);
        }
        return F[n-2] + F[n-1];

    }
}

//int main(){
//    printf("%d\n", fib(10));
//    printf("\n------------\n");
//    printf("%d\n", Ifib(10));
//
//    for (int i = 0; i < 10; ++i) {
//        F[i] = -1;
//    }
//    printf("\n------------\n");
//    printf("%d\n", Mfib(10));
//
//}