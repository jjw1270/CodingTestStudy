//https://school.programmers.co.kr/learn/courses/30/lessons/172928
//공원 산책

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer(2, 0);
    vector<pair<int, int>> dir = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} }; // N, E, S, W

    // Find start position
    for (int i = 0; i < park.size(); ++i) {
        for (int j = 0; j < park[i].size(); ++j) {
            if (park[i][j] == 'S') {
                answer[0] = i;
                answer[1] = j;
            }
        }
    }

    // Execute each command
    for (auto& route : routes) {
        int direction;
        if (route[0] == 'N') direction = 0;
        else if (route[0] == 'E') direction = 1;
        else if (route[0] == 'S') direction = 2;
        else direction = 3; // 'W'

        int distance = route[2] - '0';

        // Check if the path is clear
        bool isClear = true;
        for (int i = 1; i <= distance; ++i) {
            int checkX = answer[0] + dir[direction].first * i;
            int checkY = answer[1] + dir[direction].second * i;

            if (checkX < 0 || checkX >= park.size() || checkY < 0 || checkY >= park[0].size() || park[checkX][checkY] == 'X') {
                isClear = false;
                break;
            }
        }

        if (isClear) {
            answer[0] += dir[direction].first * distance;
            answer[1] += dir[direction].second * distance;
        }
    }

    return answer;
}
