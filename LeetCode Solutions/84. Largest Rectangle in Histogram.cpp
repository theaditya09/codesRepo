class Solution {
public:

    vector<int> nextSmallElement(vector<int>& arr) {
    stack<int> s;
    vector<int> ans(arr.size());
    for(int i=arr.size()-1; i>=0; i--)
    {
        while(!s.empty() && arr[s.top()] >= arr[i])
        {
            s.pop();
        }

        if(s.empty())
        {
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }

        s.push(i);
    }

    return ans; 
    }

    vector<int> prevSmallElement(vector<int>& arr) {
    stack<int> s;
    vector<int> ans(arr.size());
    for(int i=0; i<arr.size(); i++)
    {
        while(!s.empty() && arr[s.top()] >= arr[i])
        {
            s.pop();
        }

        if(s.empty())
        {
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }

        s.push(i);
    }

    return ans;
    }



    int largestRectangleArea(vector<int>& heights) {
        vector<int> prevSmall = prevSmallElement(heights);
        vector<int> nextSmall = nextSmallElement(heights);

        cout<<"Prev Small ";
        for(int i=0; i<prevSmall.size(); i++)
        {
            cout<<prevSmall[i]<<" ";
        }

        cout<<endl<<"Next Small ";

        for(int i=0; i<nextSmall.size(); i++)
        {
            cout<<nextSmall[i]<<" ";
        }

        int maxArea = 0;
        for(int i=0; i<heights.size(); i++)
        {
            int area = 0;
            if(prevSmall[i] == -1)
            {
                if(nextSmall[i] == -1)
                {
                    area = heights.size()*heights[i];
                }
                else{
                    int next = nextSmall[i];
                    area = (next)*heights[i];
                }
            }

            else{
                if(nextSmall[i] == -1)
                {
                    int left = prevSmall[i] + 1;
                    area = (heights.size() - left)*heights[i];
                }
                else{
                    int left = prevSmall[i] + 1;
                    int right = nextSmall[i] - 1;
                    area = (right - left + 1)*heights[i];
                }
            }

            maxArea = max(maxArea, area);
        }

        

        return maxArea;;
    }
};