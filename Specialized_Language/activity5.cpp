#include <iostream>
using namespace std;

int main() {
  int yourFriends;
  int totalFriends;
cout << "Type a number: ";
cin >> yourFriends;

totalFriends = yourFriends*yourFriends;

cout << "Your friend knows " << totalFriends << " people" << endl;

totalFriends = totalFriends*yourFriends;

cout << "And, they know " << totalFriends << " people";

return 0;
}