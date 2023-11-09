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
    
    for (int i = 0; i < truck_weights.size();)
    {
        if (sum_weight + truck_weights[i] <= weight)
        {
            sum_weight += truck_weights[i];
            q.push(truck_weights[i]);
            i++;
        }
        else if (!truck_weights.empty())
        {
            q.push(0);
        }
        sum_weight -= q.front();
        q.pop();
        a++;
    }
    return a + q.size() + 1;
}