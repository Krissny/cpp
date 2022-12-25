/*Dequeue is a data structure is in which you can delete from front as well as rear
and insert from front as well as rear.
Its like a mix of stack and queue
 It is present in <deque> header file
*/
#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(4);
    for(auto i : dq){
        cout<<i<<" ";
    }
    cout<<endl;
    dq.pop_back();
    dq.pop_front();
    for(auto i : dq){
        cout<<i<<" ";
    }
    cout<<dq.size();
}