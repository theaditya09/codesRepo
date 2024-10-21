/*
Input:
10
2

Output: 
1

Explanation:
x = 10
n = 2
10 = 1^2 + 3^2, hence we have only 1 possibility.

Example 2
Input:
100
2

Output: 
3

Explanation:
x = 100
n = 2
100 = 10^2 OR 6^2 + 8^2 OR 1^2 + 3^2 + 4^2 + 5^2 + 7^2, hence total 3 possibilities.


Sample test cases :
Input 1 :
100
2
Output 1 :
3
Input 2 :
10
2
Output 2 :
1
Input 3 :
109
5
Output 3 :
0
*/

// You are using GCC
#include<stdio.h>
#include<math.h>

int countPairs(int index, int target, int sum, int n, int last)
{
    if(index >= last+1)
    {
        if(sum == target)
        {
            return 1;
        }
        return 0;
    }
    
    double temp = pow(index,n);
    int temp2 = (int)temp;
    sum = sum + temp;
    int l = countPairs(index+1, target, sum, n, last);
    
    sum = sum - temp;
    int r = countPairs(index+1, target, sum, n, last);
    
    return l+r;
}

int main()
{
    int x,n;
    scanf("%d",&x);
    scanf("%d",&n);
    
    double res = pow(x,1.0/n);
    int last = (int)res;
    printf("%d\n",last);
    printf("%d",countPairs(0,x,0,n,last));
    
}