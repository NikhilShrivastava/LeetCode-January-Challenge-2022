
    void reverse(vector<int>& a, int start, int end){
    int temp;
    for(int i = start, j = end; i < j; i++, --j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        reverse(nums, 0, n - k - 1);
        reverse(nums, n - k, n - 1);
        reverse(nums, 0, n -1);
    }

};
