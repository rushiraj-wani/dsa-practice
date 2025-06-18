#include<iostream>
using namespace std;

int rotatedArrayRight(vector<int>& vec){
    int n = vec.size();
    int last = vec[n-1];
    for(int i=0; i<n; i++){
        vec[n-i] = vec[n-i-1];
    }
    vec[0] = last;

    return 0;
}

int main(){
    vector<int> vec = {1,2,3,4,5};

    int ans = rotatedArrayRight(vec);
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}