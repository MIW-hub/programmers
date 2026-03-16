#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
  
    sort(score.rbegin(),score.rend());
    
  for (int i = m - 1; i < score.size(); i += m) {
      
        int p = score[i]; 
        answer += p * m;
    }

    return answer;
}