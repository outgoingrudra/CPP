#include <iostream>
using namespace std;
int main() {
    int arr[3][3]={{5,2,9},{1,6,3},{7,4,8}}, mx=arr[0][0];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(arr[i][j]>mx) mx=arr[i][j];
    cout<<mx;
}
