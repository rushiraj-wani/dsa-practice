#include<iostream>
using namespace std;

int dupEle(vector<int>& vec){
    int ans = 0;
    for(int i=0; i<vec.size(); i++){
        ans ^= vec[i];
    }

    for(int i=1; i<vec.size(); i++){
        ans ^= i;
    }

    return ans;
}

int main(){
    vector<int> vec = {1,2,3,4,4,5};

    cout << "Duplicate element in array is: " << dupEle(vec) << endl;

    return 0;
}