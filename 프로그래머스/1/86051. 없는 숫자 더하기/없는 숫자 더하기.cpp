#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int>A;
    
    for(int i = 0; i < 10; i++){
        A.push_back(i);
    }
    for(int i : A)
    {
      
        if(find(numbers.begin(), numbers.end(), i) == numbers.end()){
            answer += i;
        }
    }
    return answer;
}