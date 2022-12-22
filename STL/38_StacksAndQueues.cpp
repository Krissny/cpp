/*
here we are going to study about stacks and queues, starting with stacks first
Stacks-> also called LIFO (last in  first out), you can imagine it like a 
bucket in which you are storing a stack and you can first take out the element 
which you placed last , so the name LIFO,.
You can two three operation in stacks - 
1.push( put any element on the top)
2. pop(remove the top element)
3. top{ you can know about the top element}

Now lets talk about Queues -> also FIFO ( first in first out)-> opposite of stacks
thre are also three types of operations:
1) push (puttong element at the end of queue)
2) pop( removing first element)
3)front ( looking at the front value)

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s; // syntax for declaring stack
    s.push(2); //putting element in stacks
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }  //s.empty returns a bollean

    // syntax of a queue
    queue<string> q;
    q.push("abc");
    q.push("fgh");
    q.push("sna");
    q.push("akd");
    q.push("fkh");
    while (!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    
}
