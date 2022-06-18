#include <bits/stdc++.h>

using namespace std;

class MyStack
{
public:
    queue<int> q1;
    queue<int> q2;
    MyStack()
    {
    }

    void push(int x)
    {
        // Using two queues
        //             while(!q1.empty()){
        //                 int val=q1.front();
        //                 q2.push(val);
        //                 q1.pop();

        //             }
        //             q1.push(x);
        //             while(!q2.empty()){
        //                 int val=q2.front();
        //                 q1.push(val);
        //                 q2.pop();
        //             }

        // Only using one queue
        q1.push(x);

        // transfer n-1 elements from front(current element) to rear
        int k = q1.size() - 1;
        for (int i = 1; i <= k; i++)
        {
            int val = q1.front();
            q1.pop();
            q1.push(val);
        }
    }

    int pop()
    {
        int x = q1.front();
        q1.pop();
        return x;
    }

    int top()
    {

        return q1.front();
    }

    bool empty()
    {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */