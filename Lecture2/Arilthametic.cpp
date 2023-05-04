//
// Created by HAO on 2023/5/2.
//

template<class T>
class Arilthametic{
private:
    T a;
    T b;
public:
    Arilthametic(T a, T b);
    T add();

    T sub();
};

template<class T>

Arilthametic<T>::Arilthametic(T a, T b) {
    this->a = a;
    this->b = b;
}
template<class T>
T Arilthametic<T>::add() {
    T c;
    c = a + b;
    return c;
}

template<class T>
T Arilthametic<T>::sub() {
    T c;
    c = a- b;
    return c;
}


# include "iostream"

using namespace std;
//int main(){
//    Arilthametic<int> ar(10,5);
//    cout<<ar.add()<<endl;
//    cout<<ar.sub()<<endl;
//
//    Arilthametic<double> ar1(10.99,5.12);
//    cout<<ar1.add()<<endl;
//    cout<<ar1.sub()<<endl;
//}

