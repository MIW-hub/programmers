#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(arr[0] == 10){
        answer.push_back(-1);
    }else{
     auto it = min_element(arr.begin(), arr.end());
    arr.erase(it);
    for(int i : arr)
    {
       answer.push_back(i);
    }
    }
    
    
    return answer;
}