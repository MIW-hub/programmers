#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    bool result = true;
    int i=0;
    int j=0;
    
    for(string a : goal)
    {
        if(i < cards1.size() && cards1[i] == a)
        {
            i++;
            
        }else if(j < cards2.size() && cards2[j] == a)
        {
            j++;
        }else
        {
            result = false;
        }       
        
        
    }

    answer = result ? "Yes" : "No";

    return answer;
}