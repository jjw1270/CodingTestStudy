//https://school.programmers.co.kr/learn/courses/30/lessons/178871#qna
//달리기 경주

#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer = players;

    unordered_map<string, int> pos;                 // player, idx

    for (int i = 0; i < players.size(); i++)
    {
        pos[players[i]] = i;
    }

    for (const auto& p : callings)
    {
        int index = pos[p];
        swap(answer[index], answer[index - 1]);     //swap 함수 사용
        pos[answer[index]] = index;
        pos[answer[index - 1]] = index - 1;
    }

    return answer;
}
