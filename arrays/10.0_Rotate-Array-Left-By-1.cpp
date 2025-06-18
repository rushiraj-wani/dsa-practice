#include<iostream>
using namespace std;

int rotatedArrayLeft(vector<int>& vec){
    int n = vec.size();
    int first = vec[0];
    for(int i=0; i<n; i++){
        vec[i] = vec[i+1];
    }
    vec[n-1] = first;

    return 0;
}

int main(){
    vector<int> vec = {1,2,3,4,5};

    int ans = rotatedArrayLeft(vec);
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}