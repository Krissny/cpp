/*Find the largest rectangular area possible in a given histogram 
where the largest rectangle can be made of a number of contiguous bars
 whose heights are given in an array. For simplicity,
  assume that all bars have the same width and the width is 1 unit. 
  link= " https://www.geeksforgeeks.org/largest-rectangular-area-in-a-histogram-using-stack/ "
  striver = " https://www.youtube.com/watch?v=X0X6G-eWgQ8&t=317s "
*/

#include <bits/stdc++.h>
using namespace std;

int getMaxArea(int arr[], int n){
    int left[n], right[n];  // created two arrays to keep left smallesst element and right smallest element index
    stack<int> st;
    // for left
    for(int i=0; i<n; i++){    
        while(!st.empty() and arr[i]<= arr[st.top()]){
            st.pop();
        }
        if(st.empty()) left[i] =0;
        else left[i] = st.top()+1;    
        st.push(i);
    }
    while(!st.empty()){
        st.pop();
    }
    for(int i=n-1; i>=0; i--){
        while(!st.empty() and arr[i]<= arr[st.top()]){
            st.pop();
        }
        if(st.empty()) right[i] =0;
        else right[i] = st.top()-1;
        st.push(i);
    }
    int ans =0;
    for(int i=0; i<n; i++){
        ans = max(ans, arr[i]* (right[i]-left[i]+1));
    }
    return ans;
}

int main(){
    int hist[] = { 6, 2, 5, 4, 5, 1, 6 };
    int n = sizeof(hist) / sizeof(hist[0]);
  
    // Function call
    int ans =getMaxArea(hist, n);
    cout << "Maximum area is " << ans;
    return 0;
}
