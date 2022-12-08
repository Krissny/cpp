#include <iostream>
#include <vector>
using namespace std;

bool recursive_Binary_search(vector<int> arr, int target){
    int index = (arr.size())-1;
    if(arr.size()==0){
        return false;
    }
    else{
        int midpoint = index/2;
        if(arr[midpoint]==target){
            return true;
        }
        else{
            if(arr[midpoint]<target){
                vector <int> arr1;
                for(int i=midpoint+1; i<arr.size(); i++){
                    int x = arr[i];
                    arr1.push_back(x);
                }
                return recursive_Binary_search(arr1, target);
            }
            else{
                vector <int> arr2;
                for(int i=0; i<midpoint; i++){
                    int x = arr[i];
                    arr2.push_back(x);
                }
                return recursive_Binary_search(arr2, target);
            }
        }
    }
}

int main(){
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8};
    for(int i=0; i<v.size(); i++){
        cout<<recursive_Binary_search(v,i)<<endl;
    }
}
