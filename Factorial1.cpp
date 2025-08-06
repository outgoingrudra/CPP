
#include <iostream>

using namespace std;

int factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }
    else if(n==1){
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
    int a;
    cout << "Enter a Number :";
    cin>>a;
    
    cout <<"Factorial :"<<factorial(a);
    

    return 0;
}