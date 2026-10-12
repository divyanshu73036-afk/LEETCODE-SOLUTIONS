class Solution {
public:
    
int maxDepth(string s) {
    int len = 0;
    int depth = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            len++;
            depth = max(depth, len);
        }
        else if (s[i] == ')') {
            len--;
        }
    }

    return depth;
}

};