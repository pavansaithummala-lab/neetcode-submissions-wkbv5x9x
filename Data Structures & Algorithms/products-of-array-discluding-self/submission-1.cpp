class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre_product;
        vector<int> post_product(nums.size());

        int product=1;
        for(int i=0; i<nums.size(); i++){
            pre_product.push_back(product);
            product = product*nums[i];
        }
        product=1;
        for(int i=nums.size()-1; i>=0; i--){
            post_product[i]=product;
            product = product*nums[i];
        }

        for(int i=0; i<nums.size(); i++){
            pre_product[i] = post_product[i]*pre_product[i];
        }
        return pre_product;
    }
};
