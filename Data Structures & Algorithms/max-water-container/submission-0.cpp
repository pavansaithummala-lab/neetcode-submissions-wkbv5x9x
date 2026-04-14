class Solution {
public:
    int maxArea(vector<int>& heights) {

        int length = heights.size();
        int max_area=0;
        int area;
        int j = heights.size()-1;
        int i=0;
        while(i<j){
            area = min(heights[i],heights[j])*(j-i);
            if(area>max_area){
                max_area = area;
            }
            if(heights[i] < heights[j]){
                i++;
            }
            else {
                j--;
            }
            if(i==j){
                break;
            }
        }
        return max_area;
    }
};
