
#include <iostream>
using namespace std;
class Rectangle{
    public :
    int l;
    int b;
    public :
      int area(){return l*b;}
      int perimeter(){return 2*(l+b);}
};
int main() {
    Rectangle r1;
    r1.l = 10;
    r1.b =23;
    cout <<"Area :"<< r1.area()<<endl ;
    cout <<"Perimeter :"<< r1.perimeter();

    return 0;
}