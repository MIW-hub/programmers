#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> aman = {1, 2, 3, 4, 5};
    vector<int> bman = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> cman = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    vector<int> scores(3, 0);
    
    for(int i= 0; i < answers.size(); i++)
    {
        if(aman[i % aman.size()] == answers[i])
        {
           scores[0]++;
        }
         if(bman[i % bman.size()] == answers[i])
        {
           scores[1]++;
        }
         if(cman[i % cman.size()] == answers[i])
        {
           scores[2]++;
        }
    }
   int max_score = max({scores[0],scores[1],scores[2]});
    
    for(int i = 0; i< 3; i++)
    {
        if(max_score == scores[i])
        {
            answer.push_back(i+1);
            
        }
    }
    
    return answer;
}