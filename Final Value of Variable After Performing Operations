// straight forward Approach//

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="--X")
                --x;
            else if(operations[i]=="X++")
                x++;
            else if(operations[i]=="++X")
                ++x;
            else
                x--;
            
        }
            
        return x;
        
        
    }
};


// Optimized codes//

int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i = 0; i < op.size(); i++){
            if(operations[i][0]=='+' || operations[i][1]=='+')
                x++;
            else
                x--;
        }
        return x;
    }
