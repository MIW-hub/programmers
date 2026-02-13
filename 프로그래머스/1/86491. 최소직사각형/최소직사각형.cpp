#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int a =0 ;
    int b = 0;
    
    for (int i = 0; i < sizes.size(); i++)
    {
        if (sizes[i][0] < sizes[i][1])
        {
            int c = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = c;
        }
        
            if (sizes[i][0] > a)
            {
                a = sizes[i][0];                
            }

            if (sizes[i][1] > b)
            {
                b = sizes[i][1];               
            }
        

    }
    answer = a * b;
    return answer;
}