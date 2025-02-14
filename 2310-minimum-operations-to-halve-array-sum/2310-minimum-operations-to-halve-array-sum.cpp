class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double>maxheap;
       double totalsum= accumulate(nums.begin(),nums.end(),0.0);
        double halfsum=totalsum/2.0;
        double currsum=totalsum;
        int steps=0;
        for(double num: nums)
        maxheap.push(num);
        while(currsum>halfsum){
            double largest=maxheap.top();
            maxheap.pop();

            double half=largest/2.0;
            currsum-=half;
            maxheap.push(half);
            steps++;
        }
        return steps;
    }
};