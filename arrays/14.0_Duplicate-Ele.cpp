#include<iostream>
using namespace std;

int dupEle(vector<int>& vec){
    int ans = 0;
    for(int i=0; i<vec.size(); i++){
        for(int j=i+1; j<vec.size(); j++){
            if(vec[i] == vec[j]){
                ans = vec[i];
            }
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {1,2,3,4,4};
    
    cout << "Duplicate element in array is: " << dupEle(vec) << endl;

    return 0;
}