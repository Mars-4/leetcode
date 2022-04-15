class Solution1 {
public:
    int canJump(vector<int>& nums) {
        int n = nums.size() - 1;
        int interval = 1;
        
        while(n > 0)
        {
            if(nums[n - 1] < interval)
            {
                interval++;
            }
            else
            {
                interval = 1;
            }
            n--;
        }
        
        return interval == 1;
    }
};

class Solution2 {
public:
    int canJump(vector<int>& nums) {
        int n = nums.size() - 1;

        int max = 0;
        for(int i = 0; i < n; ++i)
        {
            if(max < nums[i] + i)
            {
                max = nums[i] + i;
            }
            if(max == i)
            {
                return false;
            }
        }
        return true;
    }
};
