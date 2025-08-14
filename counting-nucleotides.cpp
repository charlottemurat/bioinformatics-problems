#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
  string countNucleotides(string s) {
      string nucleotides = "ACGT";
      unordered_map<char, int> nucleotides_map;

      for (char c : s) {
        nucleotides_map[c]++;
      }

      string result = "";
      for (char a : nucleotides) {
        result += to_string(nucleotides_map[a]);
        result += " ";
      }

      return result;
  }
};

int main() {
  Solution sol;
  string input = "AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC";
  
  cout << sol.countNucleotides(input) << endl;
  cout.flush();
  return 0;
}