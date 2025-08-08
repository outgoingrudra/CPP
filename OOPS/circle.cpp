
#include <iostream>
using namespace std;
class Circle{
    float r;
    public :
    Circle(float radius){
        r=radius ;
    }
    void setter(int t){
        r=t;
    }
    float getter(){return r;}
    float area(){return 3.14*r*r;}
    float circumference(){
        return 3.14*2*r;
    }
};
int main() {
   
    Circle c(10);
    cout <<"radius :"<<c.getter()<<endl;
    cout <<"Area :"<<c.area();
    return 0;
}