class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int , int >mymap;
        for(int i=0; i<nums.size(); i++){
            mymap[nums[i]]++;
        }
        
        for(auto &it : mymap){
            if(it.second > nums.size()/2){
                return it.first;
            }
        }
        return -1; // agar majority element na ho (lekin problem ke mutabiq hamesha hoga)
    }
};
