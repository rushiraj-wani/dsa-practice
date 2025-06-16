#include<iostream>
using namespace std;

void minMaxIndex(vector<int>& vec){
    int minIdx = 0, maxIdx = 0;
    int minEle = INT_MAX, maxEle = INT_MIN;

    for(int i=0; i<vec.size(); i++){
        if(vec[i] < minEle){
            minEle = vec[i];
            minIdx = i;
        }
        if(vec[i] > maxEle){
            maxEle = vec[i];
            maxIdx = i;
        }
    }

    cout << "Min ele index: " << minIdx << ", Max ele index: " << maxIdx << "\n";
}

int main(){
    vector<int> vec = {33,6,43,8,98,2,101,23,92,7};

    minMaxIndex(vec);

    return 0;
}