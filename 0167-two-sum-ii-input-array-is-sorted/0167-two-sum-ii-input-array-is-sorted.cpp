class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> a; 
        int start = 0 , end = arr.size() - 1 ;
        while(start < end ) {
            if (arr[start] + arr[end] == target) {
                a.push_back(start+1);
                a.push_back(end+1);
                return a;
            }
            else if (arr[start] + arr[end] < target) start++;
            else end--; 
        }
        return a ;
    }
};