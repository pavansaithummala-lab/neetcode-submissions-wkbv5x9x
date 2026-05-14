class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> count(n+1);
        for (int i=1; i<=n; i++){
            if(i%2){
                count[i] = count[i>>1]+1;
            }
            else{
                count[i] = count[i>>1];
            }
        }
        return count;
    }
};
