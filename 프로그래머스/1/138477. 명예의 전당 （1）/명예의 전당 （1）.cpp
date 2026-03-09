#include <string>
#include <vector>
#include <algorithm> 
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> sum;
    sum.reserve(k);
    for(int i : score)
    {
        if(sum.size() < k)
        {
          sum.push_back(i);   
        }
        else
        {  
          auto a = min_element(sum.begin(), sum.end());
          if(*a < i)
          {
          *a = i;
          }
        }
           
        answer.push_back(*min_element(sum.begin(), sum.end()));
    }
    
    
    return answer;
}