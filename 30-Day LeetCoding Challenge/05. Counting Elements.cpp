class Solution {
public:
  int countElements(vector<int>& arr) {
    unordered_set<int> seen;
    int res = 0;
    for(int n : arr) {
      seen.insert(n);
    }
    for(int n : arr) {
      if(seen.find(n + 1) != seen.end()) {
        res++;
      }
    }
    return res;
  }
};
