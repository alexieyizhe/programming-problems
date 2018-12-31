using namespace std;


// SOLUTION
string kangaroo(int x1, int v1, int x2, int v2) {
    string canCoordinate = "NO";
    bool twoAlwaysAhead = (v1 <= v2);
    if(!twoAlwaysAhead) {
        int interceptNumerator = (x2 - x1), interceptDenom = (v1 - v2);
        canCoordinate = (interceptNumerator % interceptDenom == 0) ? "YES" : "NO";
    }
    return canCoordinate;
}
