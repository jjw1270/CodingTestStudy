//https://school.programmers.co.kr/learn/courses/30/lessons/161989?language=cpp
//덧칠하기

#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;

    for (int i = 0; i < section.size();)
    {
        answer++;

        int tempi = i;
        for (int j = 0; j < m; j++)
        {
            if (section.size() <= tempi + j)
            {
                break;
            }

            if (section[tempi] + m > section[tempi + j])
            {
                i++;
            }
        }
    }

    return answer;
}