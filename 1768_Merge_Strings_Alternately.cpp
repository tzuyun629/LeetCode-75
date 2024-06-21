class Solution {
public:
    string mergeAlternately(string w1, string w2) {

        int n1 = w1.size();
        int n2 = w2.size();
        int N = std::max(n1, n2);

        string out;

        for (int i = 0; i < N; i ++)
        {
            if (i < n1 && i < n2)
                out = out + w1[i] + w2[i];
            else if (i >= n1 && i < n2)
                out = out + w2[i];
            else if (i < n1 && i >= n2)
                out = out + w1[i];
        }
        
        std::cout << out;
        return out;
    }
};
