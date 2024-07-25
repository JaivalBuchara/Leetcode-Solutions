class Solution {
public:

    void merge(vector<int> &nums,int l,int m,int h){
        vector<int> temp;
        int left = l, right = m+1;
        while(left<=m && right<=h){
            if(nums[left]<nums[right]){
                temp.emplace_back(nums[left++]);
            }
            else{
                temp.emplace_back(nums[right++]);
            }
        }
        while(left<=m){
            temp.emplace_back(nums[left++]);
        }
        while(right<=h){
            temp.emplace_back(nums[right++]);
            
        }
        for(int i = l;i<=h;i++) nums[i] = temp[i-l];
    }
    void mergesort(vector<int> &nums, int l,int h){
        if(l>=h) return;
        int m = l+(h-l)/2;
        mergesort(nums,l,m);
        mergesort(nums,m+1,h);
        merge(nums,l,m,h);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};
