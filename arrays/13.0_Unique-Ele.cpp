#include<iostream>
using namespace std;

int uniqueEle(vector<int>& vec){
    int ans = 0;
    for(int i=0; i<vec.size(); i++){
        ans ^= vec[i];
    }
    return ans;
}

int main(){
    vector<int> vec = {2,4,2,1,3,1,4};

    int ans = uniqueEle(vec);
    cout << "Unique element: " << ans << endl;

    return 0;
}