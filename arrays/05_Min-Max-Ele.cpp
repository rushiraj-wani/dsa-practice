#include<iostream>
#include<climits>
using namespace std;

void minMaxEle(vector<int>& vec){
    int n = vec.size();
    int minEle = INT_MAX; // Largest num is min.
    int maxEle = INT_MIN; // Smallest num is max.

    for(int i=0; i<n; i++){
        if(vec[i] < minEle){
            minEle = vec[i];
        }
        if(vec[i] > maxEle){
            maxEle = vec[i];
        }
    }
    cout << "Min ele: " << minEle << ", Max ele: " << maxEle << "\n";
}

int main(){
    vector<int> vec = {3,6,82,1,9,13};

    minMaxEle(vec);

    return 0;
}