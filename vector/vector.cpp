#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    vector<int> v;
    srand(time(0));
    for(int i=0;i<10;i++) v.push_back(rand()%100);
    for(int x:v) cout<<x<<" ";
}
