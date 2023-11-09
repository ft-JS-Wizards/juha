#include <string>
#include <vector>
#include <numeric>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    queue<int> q;
    int sum_weight = 0;

    for (int i = 0; i < bridge_length - 1; i++)
        q.push(0);
    
    int a = 0;
    
    while(sum_weight != 0 || !truck_weights.empty())
    {
        if (!truck_weights.empty() && sum_weight + (*truck_weights.begin()) <= weight)
        {
            sum_weight += truck_weights[0];
            q.push(truck_weights[0]);
            truck_weights.erase(truck_weights.begin());
        }
        else if (!truck_weights.empty())
        {
            q.push(0);
        }
        sum_weight -= q.front();
        q.pop();
        a++;
    } 
    return a + 1;
}