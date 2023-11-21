//https://school.programmers.co.kr/learn/courses/30/lessons/176963
//추억 점수

#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;

    map<string, int> mm;

    for (int i = 0; i < name.size(); i++)
    {
        mm[name[i]] = yearning[i];
    }

    for (const auto& pp : photo)
    {
        int tot = 0;
        for (const auto& p : pp)
        {
            tot += mm[p];
        }
        answer.push_back(tot);
    }

    return answer;
}