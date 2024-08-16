class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int sm = arrays[0].front();
        int bg = arrays[0].back();
        int md = 0;
        for(int i = 1;i<arrays.size();i++){
            md = max(md,abs(arrays[i].back() - sm));
            md = max(md,abs(bg - arrays[i].front()));
            sm = min(sm,arrays[i].front());
            bg = max(bg,arrays[i].back());
        }
        return md;
    }
};