//
// Created by HAO on 2023/5/4.
//

#include <stdio.h>

void func1 (int n){
    if(n > 0){
        printf("%d\n",n);
        func1(n-1);
    }
}
void func2(int n){
    if(n > 0){
        func2(n-1);
        printf("%d\n",n);
    }
}



int main(){
    int x = 3;
    func1(x);
    printf("----------------------\n");
    func2(x);
    return 0;
}