class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result(2);
        unordered_map<int, int> hashMap;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hashMap.find(target - nums[i]) != hashMap.end())
            {
                result[0] = hashMap[target - nums[i]];
                result[1] = i;
                return result;
            }
            else
            {
                hashMap[nums[i]] = i;
            }
        }
        return {};
    }
};
