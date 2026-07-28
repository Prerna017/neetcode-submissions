class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> st;
        for(int num : nums){
            if(st.count(num)){
                return true;
            }
        st.insert(num);
        }
        return false;
               
    }
        };

/*
    bool hasDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for(int num:nums){
    if(seen.count(num)){
    return true;
    }
    seen.insert(num);
    }
    return false;
    }
};
*/