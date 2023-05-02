//
// Created by HAO on 2023/5/2.
//
# include "iostream"

using namespace std;

class Rectangle{
private:
    int length;

    int breadth;

public:
    Rectangle(){
        length = breadth = 1;
    };

    Rectangle(int l, int b);

    int area() const;

    int perimeter() const;

    [[nodiscard]] int getLength() const{
        return length;
    }

    void setLength(int l){
        length = l;
    }
    ~Rectangle() = default;
};

Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}

int Rectangle::area() const {
    return length * breadth;
}
int Rectangle::perimeter() const {
    return  2 * (length + breadth);
}



int main(){
    Rectangle r(10,5) ;
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    cout<<r.getLength()<<endl;
    r.setLength(20);
    cout<<r.getLength()<<endl;
    return 0;

}





