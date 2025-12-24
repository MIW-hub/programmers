#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
   
    double answer = 0;
    
    for(int it : numbers){
        answer += it;
    }
    return answer / numbers.size();
}