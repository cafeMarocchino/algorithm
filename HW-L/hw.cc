#include <iostream>
#include <fstream>
#include <list>

using namespace std;

int get_bridge_weight(list<int>&);

int hw(ifstream &testcase) {
  int truck_num;
  int bridge_length;
  int bridge_max_weight;
  list<int> trucks;

  int result = 0;

  testcase >> truck_num;
  testcase >> bridge_length;
  testcase >> bridge_max_weight;

  list<int> bridge(bridge_length, 0);

  for(int i = 0; i < truck_num; i++) {
    int truck;
    testcase >> truck;
    trucks.push_back(truck);
    
  }
  while(!trucks.empty()) {
    if(trucks.front() + get_bridge_weight(bridge) - bridge.front() > bridge_max_weight) {
      bridge.pop_front();
      bridge.push_back(0);
    } else {
      bridge.pop_front();
      bridge.push_back(trucks.front());
      trucks.pop_front();
    }
    result++;
  }  
  return result;
}

int get_bridge_weight(list<int> &bridge) {
  int current_bridge_weight = 0;
  for (std::list<int>::iterator it=bridge.begin(); it != bridge.end(); ++it) {
    current_bridge_weight += *it;  
  }
  cout << current_bridge_weight << endl;
  return current_bridge_weight;
}
