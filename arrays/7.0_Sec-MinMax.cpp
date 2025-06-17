#include<iostream>
#include<climits>
using namespace std;

void secMinMax(vector<int>& vec){
    int n = vec.size();
    int smallEle = INT_MAX, secSmallEle = INT_MAX;
    int largeEle = INT_MIN, secLargeEle = INT_MIN;

    for(int i=0; i<n; i++){
        if(vec[i] < smallEle){
            secSmallEle = smallEle;
            smallEle = vec[i];
        }
        else if(vec[i] != smallEle && vec[i] < secSmallEle){
            secSmallEle = vec[i];
        }

        if(vec[i] > largeEle){
            secLargeEle = largeEle;
            largeEle = vec[i];
        }
        else if(vec[i] != largeEle && vec[i] > secLargeEle){
            secLargeEle = vec[i];
        }
    }

    cout << "Smallest ele: " << smallEle << "\n";
    cout << "Largest ele: " << largeEle << "\n";
    cout << "Second Smallest ele: " << secSmallEle << "\n";
    cout << "Second Largest ele: " << secLargeEle << "\n";
}

int main(){
    vector<int> vec = {32, 5, 31, 0, 45, 8, 92, 17};
    secMinMax(vec);

    return 0;
}