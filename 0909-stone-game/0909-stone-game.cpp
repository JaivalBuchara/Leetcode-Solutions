class Solution {
public:
    int choose(vector<int>& piles){
        if(piles.front()>=piles.back()){
            piles.erase(piles.begin());
            return piles.front();
        } 
        else{
            piles.erase(piles.end()-1);
            return piles.back();
        }
    }
    bool stoneGame(vector<int>& piles) {
        int sa = 0;
        int sb = 0;
        bool chance = true;
        while(piles.empty()){
            if(chance){
                sa += choose(piles);
                chance = !chance;
            }
            else{
                sb += choose(piles);
                chance !=chance;
            }
        }
        if(sb>sa){
            return false;
        }else return true; 
    }
};