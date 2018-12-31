using namespace std;


// SOLUTION
int getTotalX(vector<int> a, vector<int> b) {
    int totalX = 0,
        maxA = *max_element(a.begin(), a.end()),
        minB = *min_element(b.begin(), b.end());

    for(int i = maxA; i <= minB; ++i) {
        bool isBetweenNum = true;
        auto factorsInto = [i](bool between, int num) {
          return between && (i % num == 0);
        };
        auto isFactorOf = [i](bool between, int num) {
          return between && (num % i == 0);
        };

        isBetweenNum = accumulate(a.begin(), a.end(), isBetweenNum, factorsInto) &&
                       accumulate(b.begin(), b.end(), isBetweenNum, isFactorOf);
        if(isBetweenNum) totalX++;
    }

    return totalX;
}
