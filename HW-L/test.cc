#include <iostream>
#include <fstream>

using namespace std;

int hw(ifstream&);
void assert(int, int);

int case_number;

int main() {
  ifstream testcase("testcase");
  ifstream testout("testout");
  testcase >> case_number;
  for (int i = 0; i < case_number; i++) {
    int answer;
    testout >> answer;
    int result = hw(testcase);
    assert(answer, result);
  }
}

void  assert(int answer, int result) {
  if(answer == result) {
    cout << case_number << " - true" << endl;
  } else {
    cout << case_number << " - false" << endl << "answer : " << answer << " result : " << result << endl;
  }
}
