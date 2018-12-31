using namespace std;


// SOLUTION
vector<int> breakingRecords(vector<int> scores) {
    vector<int> brokenTimes{0, 0};
    int minScore = scores.at(0), maxScore = scores.at(0);
    for(auto &gameScore : scores) {
        if(gameScore < minScore) {
            minScore = gameScore;
            brokenTimes.at(1)++;
        }
        if(gameScore > maxScore) {
            maxScore = gameScore;
            brokenTimes.at(0)++;
        }
    }
    return brokenTimes;
}
