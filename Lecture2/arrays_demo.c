//
// Created by HAO on 2023/5/9.
//

#include <stdio.h>
#include <malloc.h>

int main(){
//    int A[5];
//    for (int i = 0; i < 5; ++i) {
//        printf("%d\n",A[i]);
//    }
//
//    int B[5] = {0};
//    for (int i = 0; i < 5; ++i) {
//        printf("%d\n",B[i]);
//    }
//
//    int *p;
//
//    p = (int*)malloc(5 * sizeof(int) );
//    p[0] = 1;
//    p[1] = 2;
//    p[2] = 3;
//    p[3] = 4;
//    p[4] = 5;
//
//    for (int i = 0; i < 5; ++i) {
//        printf("%d\n",p[i]);
//    }
//
//    free (p);

    int *p1, *q1;
    p1 = (int*) malloc(5 * sizeof (int));
    p1[0] = 3;
    p1[1] = 5;
    p1[2] = 7;
    p1[3] = 9;
    p1[4] = 11;
    q1 = (int*) malloc(10 * sizeof (int));
    for (int i = 0; i < 5; ++i) {
        q1[i] = p1[i];
//        printf("%d\n",q1[i]);
    }
    free(p1);
    p1 = q1;
    q1 = NULL;
    p1[5] = 99;
    for (int i = 0; i < 10; ++i) {
        printf("%d\n",p1[i]);
    }

    return 0;

}
