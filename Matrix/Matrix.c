#include <stdio.h>


//Diagond Matrix
struct Matrix{
    int A[10];
    int n;
};

void Set(struct Matrix *m, int i,int j, int n){
    if(i == j){
        m->A[i-1] = n;
    }
}

int Get(struct Matrix *m, int i, int j){
    if(i== j){
        return m->A[i-1];
    }
    return 0;
}

void Display(struct Matrix *m){
    for (int i = 0; i < m->n;i++){
        for (int j = 0; j < m->n; j++){
            if(i == j){
                printf("%d ",m->A[j]);
            } else{
                printf("%d ", 0);
            }
        }
        printf("\n");
    }
}

int main__Aa(){
    struct Matrix m;
    m.n = 4;
    Set(&m,1,1,5);
    Set(&m,2,2,8);
    Set(&m,3,3,10);
    Set(&m,4,4,12);
    Display(&m);

    printf("%d \n",Get(&m,2,3));
    printf("%d \n",Get(&m,3,3));
    return 0;
}