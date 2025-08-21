#include <iostream>
using namespace std;
int main() {
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}}, x=50, found=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(arr[i][j]==x) found=1;
    cout<<(found?"Found":"Not Found");
}
