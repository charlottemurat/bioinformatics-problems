#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
  string complementary_strand(string s) {
    string result = "";
    unordered_map<char, char> complementary_nucs = {
      {'A', 'T'},
      {'T', 'A'},
      {'G', 'C'},
      {'C', 'G'}
    };

    for (int i = s.length() - 1; i >= 0; i--) {
      result += complementary_nucs[s[i]];
    }

    return result;
  }
};

int main() {
  Solution sol;
  string input = "AAAACCCGGT";

  cout << sol.complementary_strand(input) << endl;

  return 0;
}