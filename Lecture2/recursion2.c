//
// Created by HAO on 2023/5/4.
//

#include <stdio.h>

//local variable
int fun(int n){
    if( n > 0){
       return fun(n-1) + n;
    }
    return 0;
}

//static variable
int fun2(int m){
    static int x = 0;
    if(m > 0){
        x++;
        return fun2(m-1) + x;
    }
    return 0;
}

//global variable
int a = 0;
int fun3(int m){
    static int x = 0;
    if(m > 0){
        a++;
        return fun3(m-1) + a;
    }
    return 0;
}

//int main(){
//    int x = 5;
//    printf("fun result %d\n", fun(x));
//    printf("-------------\n");
//    printf("fun2 result %d\n", fun2(x));
//    printf("-------------\n");
//    printf("fun3 result %d\n", fun3(x));
//}
