#include <iostream>
#include <fstream>

using namespace std;

int hw(ifstream &testcase);

int main() {
  ifstream testcase("testcase");

  int case_number;
  testcase >> case_number;

  for (int i = 0; i < case_number; i++) {
    result = hw(testcase);
    cout << result;
  }  
}
