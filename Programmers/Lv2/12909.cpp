#include <string>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> st;
    
    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
        
        if (st.size() == 1)
        {
            if (st.top() == ')')
                break;
        }
        else if (st.size() > 1)
        {
            if (st.top() == ')')
            {
                st.pop();
                st.pop();
            }
        }
    }
    return st.empty();
}