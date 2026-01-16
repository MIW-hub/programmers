#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 123456789;
     int j = 0;
    for(int i = 0; i<absolutes.size(); i++)
    {
        if(signs[i] == true)
        {
            j += absolutes[i];
        }
        else if(signs[i] == false)
        {
            j -= absolutes[i];
        }
    }
    answer = j;
    return answer;
}