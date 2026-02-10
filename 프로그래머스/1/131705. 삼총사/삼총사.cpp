#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    
    int answer = 0;
    int a =number.size();
  
    for(int i = 0; i < a-2; i++)
    {
        for(int j = i+1; j < a-1; j++)
        {
            for(int x = j+1; x<a; x++){
                if(number[i]+number[j]+number[x] == 0)
                {
                    answer++;
                }
            }
        }
    }
  
       
  
    
    return answer;
}