class Solution {
public:
  bool isHappy(int n) {
    if(n < 1) return false;
    unordered_set<int> seen;
    long long res = n;
    while(res != 1) {
      if(seen.find(res) != seen.end()) {
        return false;
      }
      seen.insert(res);
      long long temp = 0;
      while(res != 0) {
        temp += (res % 10) * (res % 10);
        res /= 10;
      }
      res = temp;
    }
    return true;
  }
};