#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int winner = 0;
    int match = 0;
    //lottos = 내꺼 그중 0을 토대로 최저최고를 찾음, win_nums = 당첨
   
    for(int a : win_nums)
    {
        for(int b : lottos)
        {
            if(a == b)
            {
                match ++;
            }
        }
    }
     for(int c : lottos)
     {
         if(c == 0)
         {
             winner ++;
         }
     }
   winner += match;

    for(int i = 1; i <= 6; i++)
    {
        if(winner < 2)
        {
            answer.push_back(6);
             break;
        }
        if(winner == i)
        {
            answer.push_back(7-i);
            break;
        }
    }
     for(int j = 1; j <= 6; j++)
    {
         if(match < 2)
        {
            answer.push_back(6);
            break;
        }
        if(match == j)
        {
            answer.push_back(7-j);
             break;
        }
    }
    
    return answer;
}