/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.
*/
 int maxArea(vector<int>& height) {
        int maxArea= INT_MIN;int i=0,j=height.size()-1;
        while(i<j){
            int area=min(height[i],height[j])*(j-i);
            maxArea=max(area,maxArea);
            if(height[i]<height[j])
            i++;
            else
            j--;
        }
        return maxArea;
    }
