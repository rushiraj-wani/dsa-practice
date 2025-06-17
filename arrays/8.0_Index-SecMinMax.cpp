#include<iostream>
#include<climits>
using namespace std;

void secMinMax(vector<int>& vec){
    int n = vec.size();
    int smallEle = INT_MAX, secSmallEle = INT_MAX;
    int largeEle = INT_MIN, secLargeEle = INT_MIN;
    int secSmallIdx = 0, secLargeIdx = 0;

    for(int i=0; i<n; i++){
        if(vec[i] < smallEle){
            secSmallIdx = i;
            secSmallEle = smallEle;
            smallEle = vec[i];
        }
        else if(vec[i] != smallEle && vec[i] < secSmallEle){
            secSmallIdx = i;
            secSmallEle = vec[i];
        }

        if(vec[i] > largeEle){
            secLargeIdx = i;
            secLargeEle = largeEle;
            largeEle = vec[i];
        }
        else if(vec[i] != largeEle && vec[i] > secLargeEle){
            secLargeIdx = i;
            secLargeEle = vec[i];
        }
    }
    cout << "Sec-small index: " << secSmallIdx << ", Sec-large index: " << secLargeIdx << endl;
}

int main(){
    vector<int> vec = {1,2,3,4,5};
    secMinMax(vec);

    return 0;
}