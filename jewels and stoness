// BRUTE FORCE SOLUTION//

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int i=0;i<stones.length();i++)
        {
            for(int j=0;j<jewels.length();j++)
            {
            if(jewels[j]==stones[i])
            {
                count++;
            }
            }
        }
        return count;
        
    }
};

// OPTIMIZED SOLUTION//

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       unordered_set<char> stonesSet;
    for(int i=0;i<stones.length();i++)
        stonesSet.insert(stones[i]);
    int count = 0;
    for(int i=0;i<stones.length();i++){
        if(stones.count(jewels[i]) == true)
            count++;
    }
    return count;
    }
};
