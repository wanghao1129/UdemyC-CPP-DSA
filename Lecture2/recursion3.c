//
// Created by HAO on 2023/5/5.
//

#include <stdio.h>

void funcB(int n);

void funcA(int n){
    if(n > 0){
        printf("%d ",n);
        funcB(n - 1);
    }
}

/**
 * indirect recursion
 * @param n
 */
void funcB(int n){
    if(n > 0){
        printf("%d ",n);
        funcA(n / 2);
    }
}

/**
 * nested recursion
 * @param n
 * @return
 */
int funC(int n){
    if(n >100){
        return n - 10;
    } else{
        return funC(funC(n + 11));
    }
}

int main(){
    int x = 3;
    funcA(20);
    printf("\n-------------------\n");
    int y = funC(95) ;
    printf("%d\n",y);

    return 0;
}