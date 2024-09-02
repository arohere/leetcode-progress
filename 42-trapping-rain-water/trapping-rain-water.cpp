class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0, left_max = height[0];
        int sum = 0;
        int n = height.size();
        int j = n-1, right_max = height[n-1];
        while (i<j){
            if (left_max <= right_max){
                sum+= left_max - height[i];
                i++;
                left_max = max(left_max,height[i]);
            } else {
                sum += right_max - height[j];
                j--;
                right_max = max(right_max,height[j]);
            }
            cout << i << " " << j << " " << sum << endl;
        }
        return sum;
    }
};