#include <iostream>
#include <map>
#include <list>
using namespace std;

int main() {
  int n; // number of pyanis
  cin >> n; // input n
  map<int, list<int>> freq; // map to store the frequency of each pyani and its position in the input
  for (int i = 0; i < n; i++) { // loop for each pyani
    int p; // number on the pyani
    cin >> p; // input p
    freq[p].push_back(i); // add the position of p to the list of its frequency
  }
  for (auto it : freq) { // loop for each pair in the map
    if (it.second.size() == 1) { // if the size of the list is 1, then it is the unique pyani
      cout << it.first << endl; // output the number on the unique pyani
      break; // break the loop
    }
  }
  return 0;
}
