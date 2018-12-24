class NumArray {
public:
    NumArray(vector<int> nums): n{nums} {

    }

    void update(int i, int val) {
        n[i] = val;
    }

    int sumRange(int i, int j) {
        int sum = 0;
        for(int pos = i; pos <= j; ++pos) sum += n[pos];

        return sum;
    }
private:
    vector<int> n;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * obj.update(i,val);
 * int param_2 = obj.sumRange(i,j);
 */
