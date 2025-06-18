#include<iostream>
using namespace std;

int linearSearch(vector<int>& vec, int key){
    for(int i=0; i<vec.size(); i++){
        if(vec[i] == key) return i;
    }
    return -1;
}

int main(){
    vector<int> vec = {2,6,3,1,8};
    int key = 1;

    int result = linearSearch(vec, key);
    cout << "Key: " << key << ", Index: " << result << endl;
    
    return 0;
}