class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> mystack;
        for(auto &it:tokens)
        {
            if(it == "*" || it == "/" || it =="-" || it == "+")
            {
                int a, b;
                a = mystack.top();
                mystack.pop();
                b = mystack.top();
                mystack.pop();
                if(it == "*") mystack.push(a*b);
                if(it == "+") mystack.push(a+b);
                if(it == "/") mystack.push((int)b/a);
                if(it == "-") mystack.push(b-a);
            }
            else
            {
                mystack.push(stoi(it));
            }
        }
        return mystack.top();
    }
private:
    stack<string> nums;
    stack<string> operators;
};