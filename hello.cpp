#include<iostream>
using namespace std;
class hello
{
    private:
    static int number;

    public:
    hello()
    {
      number++;
    }
    int get_num()
    {
        return number;
    }
};
int hello::number;
int main(){
    hello h1,h2;
    cout<<"num is"<<h1.get_num()<<endl;
    cout<<"num is"<<h2.get_num()<<endl;
}