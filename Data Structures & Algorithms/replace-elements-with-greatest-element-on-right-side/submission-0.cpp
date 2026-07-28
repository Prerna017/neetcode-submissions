class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        int rightMax = arr[n-1];
        arr[n-1] = -1;

        for(int i=n-2; i>=0 ; i--){
            int current = arr[i];
            arr[i] = rightMax;
            rightMax = max(rightMax , current);
        }
        return arr;
    }
};