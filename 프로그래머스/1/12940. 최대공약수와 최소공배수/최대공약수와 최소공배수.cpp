#include <string>
#include <vector>
#include <numeric>
using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int b = lcm(n, m);
    
  while(m != 0)
  {
      int a = n % m;     
          n = m;
          m = a;
            
  }
    answer.push_back(n);    
    answer.push_back(b);
    
    return answer;
}