#include <iostream>
#include <vector>
using namespace std;

char opening(char c) { // get opening bracket of same type
  if (c == ')') return '(';
  if (c == ']') return '[';
  if (c == '}') return '{';
}

bool is_opening(char c){ 
  return c == '(' || c == '[' || c == '{';
}

bool is_closing(char c) {
  return !is_opening(c);
}

string is_balanced(string s) {
  int N = s.size();
  vector<bool> matched(N, false);

  for (int i = 0; i < N ;i ++) {
    if (is_closing(s[i])) {
      int found_pos = -1; // position of mathcing opening bracket
      for (int j = i - 1; j >= 0; j--){
        if ( !matched[j] && is_opening(s[j]) && s[j] == opening(s[i]) ) {
          found_pos = j;
          break;
        }
      }
      if (found_pos == -1) // didn't find matching bracket
        return "No\n";
      
      matched[i] = matched[found_pos] = true;
    }
  }

  return "Yes\n"; //Nothing went wrong, all brackets matched
}

int main() {
  cout << is_balanced("[()]{}{[()()]()}");
  cout << is_balanced("]]");
  cout << is_balanced("[(){[]({})}]");
  cout << is_balanced("[(){[)({})}]");
  return 0;
  //Given a string sequence consisting of length NN only of opening or closing parentheses ( ) [ ] { },
  // determine if the sequence is a correct bracket sequence.


}
