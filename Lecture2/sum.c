//
// Created by HAO on 2023/5/6.
//

#include <stdio.h>

int sum(int n){
    if(n == 0){
        return 0;
    } else{
        return sum(n-1) + n;
    }
}

int sum2(int n){
    int result = 0;
    for (int i = 1; i <= n; ++i) {
        result += i;
    }
    return result;
}

int sum3(int n){
    return  n * (n+1) / 2;
}

int fact(int n){
    if(n == 0){
        return 1;
    }
    return fact(n-1) * n;
}

int Ifact(int n){
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

//int main(){
//    printf("%d\n", sum(100));
//    printf("\n--------------\n");
//    printf("%d\n", sum2(100));
//    printf("\n--------------\n");
//    printf("%d\n", sum3(100));
//    printf("\n--------------\n");
//    printf("%d\n", fact(5));
//    printf("\n--------------\n");
//    printf("%d\n", Ifact(5));
//    return 0;
//}
