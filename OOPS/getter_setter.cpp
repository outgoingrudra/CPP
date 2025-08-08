
#include <iostream>
using namespace std;
class Rectangle{
    public :
    int l;
    int b;
    public :
      Rectangle(){
          l=0;
          b=0;
      }
      Rectangle(int len,int bre){
          l =len;
          b=bre;
      }
      void setLength(int len){
          l= len;
      }
      int getLength(){
          return l;
      }
      int area(){return l*b;}
      int perimeter(){return 2*(l+b);}
};
int main() {
    Rectangle r1(12,10);
   
    cout <<"Area :"<< r1.area()<<endl;
    cout <<"Perimeter :"<< r1.perimeter()<<endl;
    r1.setLength(100);
    cout<<r1.getLength();

    return 0;
}