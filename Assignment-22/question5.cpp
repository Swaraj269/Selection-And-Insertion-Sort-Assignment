#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string strs[5] = { "raghav", "sanket", "urvi", "harsh","vishwa"} ;
    int n = sizeof(strs)/sizeof(strs[0]);
    for(int i=0; i<n-1; i++){
        bool flag = false;
        for(int j=0; j<n-1-i; j++){
            if(strs[j]>strs[j+1]){
                swap(strs[j], strs[j+1]);
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout << strs[i] << " ";
    }
    return 0;
}