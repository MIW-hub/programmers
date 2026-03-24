#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int result = 0;
    vector<int> sum;
   for(int i = 0; i < nums.size()-2; i++)
   {
       for(int j = i+1; j < nums.size() - 1; j++ )
       {
          for(int k = j+1; k< nums.size(); k++)
          {
              if(nums[i] != nums[j] && nums[i]!= nums[k])
              {
                  sum.push_back(nums[i] + nums[j] + nums[k]);
                  
              }
          }
           
       }
   }
   for(int b : sum)
   {
       int i = 2;
       for(; i < b; i++)
       {
           if (b % i == 0) break;
       }
       
       if(i * i > b) answer ++;
   }
    
    return answer;
}