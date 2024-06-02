#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,4,3,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1; i<n; i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    int digit1 = 0;
    int digit2 = 0;
    for(int i=0; i<n; i++){
        digit1 = digit1*10 + arr[i];
    }
    for(int i=n-1; i>=0; i--){
        if(arr[i]!=arr[i-1]) {
            swap(arr[i], arr[i-1]);
            break;
        }
    }
    for(int i=0; i<n; i++){
        digit2 = digit2*10 + arr[i];
    }
    cout<< digit1<<" "<< digit2<<endl;
    cout << "Minimum sum of the two numbers formed by the digits of the array: "<< digit1+digit2<<endl;
    return 0;
}