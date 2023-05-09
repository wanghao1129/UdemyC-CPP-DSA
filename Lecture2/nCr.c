//
// Created by HAO on 2023/5/8.
//

#include <stdio.h>

int Nfact(int n){
    if(n == 0){
        return 1;
    }
    return Nfact(n-1) * n;
}

//帕斯卡三角
int ncr(int n, int r){
    if(n ==r | r == 0){
        return 1;
    }
    return ncr(n-1,r-1) + ncr(n-1,r);
}

//帕斯卡三角
int ncr2(int n, int r){
    int num, den;
    num = Nfact(n);
    den = Nfact(r) * Nfact(n-r);
    return num / den;
}

//汉诺塔
void HON(int n,int A,int B, int C){
    if(n > 0){
        HON(n-1,A,C,B);
        printf("(%d,%d)\n",A,C);
        HON(n-1,B,A,C);
    }
}

//int main(){
//    printf("%d \n",ncr(5,3));
//    printf("%d \n",ncr2(5,3));
//    HON(3,1,2,3);
//}
