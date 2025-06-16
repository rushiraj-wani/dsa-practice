#include<iostream>
using namespace std;

void extPrint(vector<int>& vec){
    int n = vec.size();
    int i = 0, j = n - 1;
    
    while(i <= j){
        if(i == j){
            cout << vec[i] << " ";
            break;
        } 
        else{
            cout << vec[i] << " " << vec[j] << " ";
            i++;
            j--;
        }
    }
}

int main(){
    vector<int> vec = {1,3,5,7,9};
    
    extPrint(vec);
    cout << endl;

    return 0;
}