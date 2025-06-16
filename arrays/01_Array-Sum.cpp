#include<iostream>
using namespace std;

int arraySum(vector<int>& vec){
    int sum = 0;
    for(int i=0; i<vec.size(); i++){
        sum += vec[i];
    }
    return sum;
}

int main(){
    vector<int> vec = {1,2,3,4,5,6};
    cout << "Sum: " << arraySum(vec) << endl;

    return 0;
}