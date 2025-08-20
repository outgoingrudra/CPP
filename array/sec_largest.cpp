#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    
    int first = -1e9, second = -1e9;
    for(int i=0;i<n;i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    cout << "Second Largest: " << second;
}
