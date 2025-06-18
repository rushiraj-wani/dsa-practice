#include<iostream>
using namespace std;

int keyPresent(vector<int>& vec, int key){
    for(int i=0; i<vec.size(); i++){
        if(vec[i] == key) return i;
    }
    return -1;
}

int main(){
    vector<int> vec = {3,7,2,6,1,8};
    int key = 3;

    int index = keyPresent(vec, key);
    if(index != -1) cout << "Key is present at index: " << index << endl;
    else cout << "Key is not present \n";

    return 0;
}