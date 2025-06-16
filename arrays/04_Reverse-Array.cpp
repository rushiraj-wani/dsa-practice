#include<iostream>
using namespace std;

void revArray(vector<int>& vec){
    int n = vec.size();

    for(int i=0; i<n; i++){
        cout << vec[n-i-1] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> vec = {1,3,5,7,9};

    revArray(vec);

    return 0;
}