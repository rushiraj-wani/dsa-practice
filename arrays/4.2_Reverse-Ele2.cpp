#include<iostream>
using namespace std;

vector<int> revArray(vector<int>& vec){
    int n = vec.size();
    int i=0, j=n-1;

    while(i <= j){
        swap(vec[i], vec[j]);
        i++;
        j--;
    }

    return vec;
}

int main(){
    vector<int> vec = {1,3,5,7,9};

    vector<int> ans = revArray(vec);
    for(int out : ans) cout << out << " ";
    cout << endl;

    return 0;
}