class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        int n = path.size();
        for(int i = 0 ; i < n ; i++){
            while(i<n && path[i]=='/'){
                i++;
            }
            string s;
            while(i<n && path[i]!='/'){
                s.push_back(path[i]);
                i++;
            }
            if(s==".."){
                if(!st.empty()) st.pop();
            }
            else if(s=="."){
                continue;
            }
            else if(!s.empty()) st.push(s);
        }
        stack<string> st2;
        while(!st.empty()){
            st2.push(st.top());
            st.pop();
        }
        string answer;
        while(!st2.empty()){
            answer.push_back('/');
            answer.append(st2.top());
            st2.pop();
        }
        if(answer.empty()) return "/";
        return answer;

        
    }
};