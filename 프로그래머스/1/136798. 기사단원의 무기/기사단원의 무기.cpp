#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> num(number,0);
    
    for(int i = 1; i <= number ; i++)
    {
         for (int j = 1; j * j <= i; j++)
         {
            if (i % j == 0)
            {
            num[i-1]++; 
            if (j * j != i) num[i-1]++; 
            }
         }
    }
    for(int a : num)
    {
        if(a > limit)
        {
            answer += power;
        }else{
            answer += a;
        }
    }
      

    return answer;
}