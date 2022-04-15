class Solution1 {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();

        int maxx = INT_MIN;
        int val = 0;
        for(int i : nums)
        {
            val = val + i;
            if(maxx < val)
            {
                maxx = val;
            }
            if(val < 0)
            {
                val = 0;
            }
        }
        return maxx;
    }
};

class Solution2 {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();

        int maxx = INT_MIN;
        int val = 0;
        for(int i : nums)
        {
            val = max(val + i, i);
            maxx = max(val, maxx);
        }
        return maxx;
    }
};//20220416

