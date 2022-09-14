#include<iostream>
using namespace std;
class squareRectangle{
private:
float length;
float breadth;
float height;
float side;
public:
int recvol(){
    return(length*breadth*height);
}
int sqvol(){
    return(side*side*side);
}
squareRectangle(float l,float b,float h,float s){
    length = l;
    breadth = b;
    height = h;
    side = s;
}

void display(){
    cout<<"The vol of square is "<<sqvol()<<endl;
    cout<<"The vol of rectangle is "<<recvol()<<endl;
}
};
int main(){
    squareRectangle r1(3,2,6,5);
    r1.display();
}
