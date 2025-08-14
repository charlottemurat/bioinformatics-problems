#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
  string transcribing_dna_to_rna(string t) {
    string result = "";

    for (char c : t) {
      if (c != 'T') {
        result += c;
      } else {
        result += "U";
      }
    }

    return result;
  }
};

int main() {
  Solution sol;
  string input = "GATGGAACTTGACTACGTAAATT";

  cout << sol.transcribing_dna_to_rna(input) << endl;

  return 0;
}