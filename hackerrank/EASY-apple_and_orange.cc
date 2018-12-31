using namespace std;


// SOLUTION
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int applesLandedOnHouse = 0, orangesLandedOnHouse = 0;
    for(auto &dx : apples) {
      bool willLandOnHouse = (s <= (a + dx) && (a + dx) <= t);
      if(willLandOnHouse) applesLandedOnHouse++;
    }

    for (auto &dx : oranges) {
      bool willLandOnHouse = (s <= (b + dx) && (b + dx) <= t);
      if (willLandOnHouse)
        orangesLandedOnHouse++;
    }

    cout << applesLandedOnHouse << endl << orangesLandedOnHouse << endl;
}
