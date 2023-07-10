class MyStack
{
public:
    queue<int> que;
    MyStack()
    {
    }

    void push(int x)
    {
        que.push(x);
    }

    int pop()
    {
        int last;
        queue<int> newQue;
        while (!que.empty())
        {
            int temp = que.front();
            que.pop();
            if (que.empty())
            {
                last = temp;
                break;
            }
            newQue.push(temp);
        };
        que = newQue;
        return last;
    }

    int top()
    {
        int last;
        queue<int> newQue;
        while (!que.empty())
        {
            int temp = que.front();
            que.pop();
            if (que.empty())
            {
                last = temp;
            }
            newQue.push(temp);
        };
        que = newQue;
        return last;
    }

    bool empty()
    {
        return que.empty();
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