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
            cout << i << ": " << "small: " << smallEle << ", secSmall: " << secSmallEle << endl;
        }
        else if(vec[i] != smallEle && vec[i] < secSmallEle){
            secSmallEle = vec[i];
            cout << i << ": " << "small: " << smallEle << ", secSmall: " << secSmallEle << endl;    
        }

        if(vec[i] > largeEle){
            secLargeEle = largeEle;
            largeEle = vec[i];
            cout << i << ": " << "large: " << largeEle << ", secLarge: " << secLargeEle << endl;
        }
        else if(vec[i] != largeEle && vec[i] > secLargeEle){
            secLargeEle = vec[i];
            cout << i << ": " << "large: " << largeEle << ", secLarge: " << secLargeEle << endl;
        }
        cout << endl;
    }
}

int main(){
    vector<int> vec = {32, 5, 19, 7, 28};
    secMinMax(vec);

    return 0;
}