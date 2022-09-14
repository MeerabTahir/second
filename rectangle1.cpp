#include<iostream>
using namespace std;
class Rectangle{
private:
float length;
float breadth;
float height;
float side;
public:
int area(){
    return(length*breadth);
}
int perimeter(){
    return(2*(length + breadth));
}
Rectangle(float l,float b){
    length = l;
    breadth = b;
}

void display(){
    cout<<"The vol of square is "<<area()<<endl;
    cout<<"The vol of rectangle is "<<perimeter()<<endl;
}
};
int main(){
    Rectangle r1(3,2);
    r1.display();
}

