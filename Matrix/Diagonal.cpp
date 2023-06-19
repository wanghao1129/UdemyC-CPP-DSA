//
// Created by HAO on 2023/6/19.
//
#include "iostream"
using namespace std;

class Diagonal{
private:
    int n;
    int *A;
public:
    Diagonal(){
        n = 2;
        A = new int[2];
    };

    Diagonal(int n){
        this->n = n;
        A = new int[n];
    };

    void Set(int i, int j, int x);

    int Get(int i, int j);

    void Display();
    ~Diagonal(){
        delete []A;
    };
};

void Diagonal::Set(int i, int j, int x){
    if(i == j){
        A[i-1] = x;
    }
}

int Diagonal::Get(int i, int j){
    if(i == j){
        return A[i-1];
    } else{
        return 0;
    }
}

void Diagonal::Display() {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j){
                std::cout<<A[i] << " ";
            } else{
                std::cout<<"0 ";
            }
        }
        std::cout<<endl;
    }
}


int main(){
    Diagonal diagonal(4);
    diagonal.Set(1,1,2);
    diagonal.Set(2,2,4);
    diagonal.Set(3,3,6);
    diagonal.Set(4,4,8);
    diagonal.Display();
    cout<<diagonal.Get(3,3)<<endl;
    cout<<diagonal.Get(3,4)<<endl;

}
