#include <string>
#include <vector>
 #include <algorithm>
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string ranswer ="";
    int sum;
    
    for(int i = 0; i< food.size(); i++)
    {
        food[0] = 1;
        sum = 0;
        sum = food[i] / 2;
        
        for(int j = 0; j< sum; j++)
        {     
            answer += to_string(i);
        }
    }
    ranswer = answer;
    reverse(ranswer.begin(),ranswer.end());
    answer += to_string(0);
    answer += ranswer;
    
    
    
    return answer;
}