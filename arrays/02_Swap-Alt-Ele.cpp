#include<iostream>
using namespace std;

void swapAlt(vector<int>& vec){
    int n = vec.size();
    
    for(int i=0; i<n; i+=2){
        int temp = vec[i];
        vec[i] = vec[i+1];
        vec[i+1] = temp;
    }

    // print
    for(int ans : vec) cout << ans << " ";
    cout << endl;
}

int main(){
    vector<int> vec = {1,5,8,2,9,0};
    
    swapAlt(vec);

    return 0;
}