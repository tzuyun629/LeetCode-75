class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int candies_add[candies.size()];
        vector<bool> result(candies.size(), true);

        for (int i = 0; i < candies.size(); i++)
        {
            candies_add[i] = candies[i] + extraCandies;
            cout << "candies_add[" << i << "] =" << candies_add[i] << "\n";

            for (int j = 0; j < candies.size(); j++)
            {
                cout << "candies[" << j << "] =" << candies[j] << "\n";
            
                if (candies_add[i] < candies[j])
                    result[i] = false;
            }
        }

        return result;
    }
};
