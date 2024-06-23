class Solution {
public:
    string reverseVowels(string s) {
        vector<int> va;

        // loop string
        for (int i = 0; i < s.size(); i++)
        {
            if ( s[i] == 'a' || s[i] == 'A' ||
                    s[i] == 'e' || s[i] == 'E' ||
                    s[i] == 'i' || s[i] == 'I' ||
                    s[i] == 'o' || s[i] == 'O' ||
                    s[i] == 'u' || s[i] == 'U' )
            {
                // save "index" to vowels array
                va.push_back(i);

                // cout << "s[" << i << "] = " << s[i] << "\n" << "va[" << nv << "] = " << va[nv] << "\n";
            }
        }

        // loop vowel array
        for (int i = 0; i < va.size()/2; i++)
            swap( s[va[i]], s[va[va.size()-1-i]] );

        return s;
    }
};
