#include <iostream>
using namespace std;
int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}, sum=0;
    for(int i=0;i<3;i++) sum+=arr[i][2-i];
    cout<<sum;
}
