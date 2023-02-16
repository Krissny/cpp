//max sum of sub-contigous array -> to do this quetsion in O(n)-> we have to use Kadane's Algo.
// **Algo**
// Declare to variable sum and maxi
// sum will keep track of the current sum 
// and maxi will keep track of the max value encounter upto the current sum
// although there is a catch , if the current sum becomes negative->it should be updated to zero
// This is so because->adding more negative values to the current sum will just decrease the current sum value
#include <iostream>
using namespace std;

long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long maxi = arr[0]; // here i could have also intialised it with INT_MIN
        long long sum1 =0;
        for(int i=0; i<n;i++){
            sum1+=arr[i];
            maxi = max(sum1, maxi);
            if(sum1<0){
                sum1=0;
            }
        }
        return maxi;
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    long long res = maxSubarraySum(arr, n);
    cout<<res<<endl;
}