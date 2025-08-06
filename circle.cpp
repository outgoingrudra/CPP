
#include <iostream>

using namespace std;
int main() {
    const float PI = 3.14159;
    float radius;
    cout <<"Enter Radius :";
    cin >> radius;
    float area = PI * radius * radius ;
    float perimeter = 2*PI*radius;
    cout <<"------------------------"<<"\n"<<
           "Radius : "<<radius << "\n"<<
           "Perimeter : "<<perimeter<<"\n"<<
           "Area : "<<area<<endl;
    

    return 0;
}