//
// Created by HAO on 2023/5/21.
//

#include <iostream>

using namespace std;
template <class T>
class TemplateArray{
private:
    int length;
    int size;
    T *A;
public:
    TemplateArray(){
        length = 0;
        size = 10;
        A = new T[10];
    }
    TemplateArray(int sz){
        length = 0;
        size = sz;
        A = new T[sz];
    }
    ~TemplateArray(){
        delete[] A;
    }
    void Insert(int index, T x);
    T Delete(int index);
    void Display();

};

template <class T>
void TemplateArray<T>::Insert(int index, T x) {
    if(index >= 0 && index <= length){
        for (int i = length -1; i >= index;i--){
            A[i+1] = A[i];
        }
        A[index] = x;
        length++;
    }
}

template <class T>
T TemplateArray<T> ::Delete(int index) {
    T result;
    if(index >= 0 && index <= length-1){
        result = A[index];
        for (int i = index; i < length-1;i++){
            A[i] = A[i+1];
        }
        length--;
        return result;
    }
}

template <class T>
void TemplateArray<T>::Display() {
    cout<<"------------\n";
    for (int i = 0; i < length; ++i) {
        cout<< A[i] << " ";
    }
    cout<<endl;
}

int main(){
    TemplateArray<int> templateArray(10);
    templateArray.Insert(0,10);
    templateArray.Insert(1,20);
    templateArray.Insert(2,30);
    templateArray.Delete(2);
    templateArray.Display();

    TemplateArray<float> templateArray1(10);
    templateArray1.Insert(0,5.2);
    templateArray1.Insert(1,6.2);
    templateArray1.Insert(2,8.2);
    templateArray1.Delete(0);
    templateArray1.Display();
    return 0;
}