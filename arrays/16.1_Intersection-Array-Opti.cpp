#include<iostream>
using namespace std;

vector<int> intersectionArray(vector<int>& vec1, int n, vector<int>& vec2, int m){
    vector<int> ans;
    int i = 0, j = 0;

    while(i < n && j < m){
        if(vec1[i] == vec2[j]){
            ans.push_back(vec1[i]);
            i++;
            j++;
        }
        else if(vec1[i] < vec2[j]){
            i++;
        }
        else {
            j++;
        }
    }
    
    return ans;
}

int main(){
    vector<int> a = {1,2,2,3,4};
    int n = a.size();

    vector<int> b = {2,3,4};
    int m = b.size();

    vector<int> result = intersectionArray(a, n, b, m);
    for(int ans : result) cout << ans << " ";
    cout << endl;

    return 0;
}