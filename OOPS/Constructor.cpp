
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
      int area(){return l*b;}
      int perimeter(){return 2*(l+b);}
};
int main() {
    Rectangle r1(12,10);
   
    cout <<"Area :"<< r1.area();
    cout <<"Perimeter :"<< r1.perimeter();

    return 0;
}