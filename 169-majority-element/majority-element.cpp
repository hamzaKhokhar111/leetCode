#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mymap;
        int n = nums.size();

       for(int i=0; i<n; i++){
           mymap[nums[i]]++;

           if(mymap[nums[i]]>n/2){
            return nums[i];
           }
       }
        // Yeh line kabhi nahi chalegi kyunki question keh raha hai ke majority element hamesha hoga
        return -1;
    }
};
