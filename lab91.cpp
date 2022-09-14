#include<iostream>
using namespace std;
class B{
public:
    B();
    B(int n);
    int getp()const;
    int getq()const;
protected:
    int p;
private:
    int q;         
};
B::B(){
    p = 0;
    q = 0;
}
B::B(int n){
    p = n;
    q = n;
}
int B::getp()const{
    return p;
}
int B::getq()const{
    return q;
}
class D : public B{
public:
    D();
    D(int n);
    int getr()const;
private:
    int o;
    int r;
};
D::D(){
    o = 0;
    r = 0;
}
D::D(int n):B(n){
    o = n;
    r = n;
}
int D::getr()const{
    return r;
}    

int main(){
    D d(3);
    cout<<d.getp()<<" "<<d.getq()<<" "<<d.getr()<<" "<<endl;
    return 0;
}