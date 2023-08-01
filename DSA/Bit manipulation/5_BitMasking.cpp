#include <bits/stdc++.h>
using namespace std;
/*
BITMASKING
if we look at the word Bit + masking , it is really whatitsound like
Lets see an example, say we have some fruits indexed following ways
0 -> APPLE
1 -> ORANGE
2 -> BANANA
3 -> LICHI
Now lets say we have 3 persons, and each had the following fruits(shown in terms of index)
1 -> 2 , 3
2 -> 0, 1, 2
3 -> 1, 3
So now what if we need to find which people have same fruit, like I want to
find which fruits are commmon in 1 and 2 -> 2 is common
There many ways to do this , what you have to basically do is to find the intersection of fruits bwtween two people given and you have to considerthe fruits a person have as an array. The most optimisedd sol for this is in O(N) using two pointers
Lets see how bit masking can help us here:-
1 -> 2 , 3 -> we can represent this as set bits in a binary number-> 1100(12) -> here the index of set bits represents the fruit
2 -> 0, 1, 2 -> 0111(7)(similary)
3 -> 1, 3 -> 1010(10)(similarly)
And this is what called bitmasking , we used a mask of bits to represent a whole array 
Each bit in the binary number represents whether a fruit is present or not
So how it solves our intersection problem?
First thing is we are using a number rather than an array to represent the fruits so , it very less expensive
Second to find the intersection between two set of fruits , you can just take 'and'(&) of the two binary numbers 
lets find the common fruits between 1 and 2 i.e -> 1100 & 0111 = 0100-> that means the second fruit
***NOTE***
There is a  limit to bitmasking, as if we use int we have 32 bits -> means we can't have fruits more than 32
and for long long , it has 64 bits

*/
void printBinary(int num){
    for(int i =10; i >=0; --i){
        cout<<((num>>i) &1); 
    }
    cout<<endl;
}

int main(){
/*
Lets solve a question based on bit masking

Consider this problem: There are N≤5000
 workers. Each worker is available during some days of this month (which has 30 days). For each worker, you are given a set of numbers, each from interval [1,30]
, representing his/her availability. You need to assign an important project to two workers but they will be able to work on the project only when they are both available. Find two workers that are best for the job — maximize the number of days when both these workers are available.

Lets consider the following input 
5 (No of people)
4(No of days)
1 4 7 9 (days)
6
2 9 1 7 25 29
7
1 23 4 7 9 11
10
2 28 8 7 9 10 30 21 18 19
4
1 11 29 7
*/
//solution
    int n;
    cin>>n;
    // vector<int> days[n]; // this represents a vector of vectors
    vector<int>masks(n,0);
    for(int i =0; i<n;i++){
        int num_workers;
        cin>>num_workers;
        int mask =0;
        for(int j=0; j<num_workers; j++){
            int day;
            cin>>day;
            mask = (mask | (1<<day));
        }
        masks[i] = mask;
    }
    // for(int i =0; i<n; i++){
    //     cout<<masks[i]<<endl;
    //     printBinary(masks[i]);
    // }
    int max_count =0;
    int person1 =-1;
    int person2 =-1;
    for(int i =0; i<n; i++){
        for(int j =i+1; j<n; j++){
            int intersection = masks[i] & masks[j];
            int common_days = __builtin_popcount(intersection);
            if(common_days > max_count){
                max_count = common_days;
                person1 =i;
                person2 =j;
            }
        }
    }

    cout<<person1<<" "<<person2<<" "<<max_count;

}