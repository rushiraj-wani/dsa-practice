#include<iostream>
using namespace std;

vector<int> intersectionArray(vector<int>& vec1, vector<int>& vec2){
    vector<int> ans;

    for(int i=0; i<vec1.size(); i++){
        for(int j=0; j<vec2.size(); j++){
            if(vec1[i] == vec2[j]){
                ans.push_back(vec1[i]);
                vec2[j] = INT_MIN;
                break;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> a = {3,7,1,4,5};
    vector<int> b = {3,2,8};

    vector<int> result = intersectionArray(a, b);
    for(int ans : result) cout << ans << " ";
    cout << endl;

    return 0;
}