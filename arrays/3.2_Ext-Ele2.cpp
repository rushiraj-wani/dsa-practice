#include<iostream>
using namespace std;

vector<int> extPrint(vector<int>& vec){
    int n = vec.size();
    int i = 0, j = n - 1;
    vector<int> ans;
    
    while(i <= j){
        if(i == j){
            ans.push_back(vec[i]);
            break;
        } 
        else{
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);
            i++;
            j--;
        }
    }

    return ans;
}

int main(){
    vector<int> vec = {1,3,5,7,9};
    
    vector<int> ans = extPrint(vec);
    for(int out : ans) cout << out << " ";
    cout << endl;


    return 0;
}