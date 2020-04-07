class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    vector<vector<string>> res;
    for(string str : strs) {
      string key = count_sort(str);
      mp[key].push_back(str); // Will fail the repeated strings
    }
    for(auto pa : mp) {
      res.push_back(pa.second);
    }
    return res;
  }
private:
  string count_sort(string value) {
    int count[26] = {};
    string res = "";
    for(char c : value) {
      count[c - 'a']++;
    }
    for(int i = 0; i < 26; i++) {
      res += string(count[i], 'a' + i);
    }
    return res;   
  }
};


