#include <iostream>
#include <vector>


using namespace std;

struct Position {
  int x;
  int y;
};

vector<Position> position_vec;

bool isMovable(Position start_position, Position arrival_position, int health) {

  return true;
}

int main() {
  int position_number;
  int question_number;
  cin >> position_number >> question_number;

  position_vec.resize(position_number);
  vector<bool> result_vec(question_number);

  for (int i = 0; i < position_number; i++) {
    cin >> position_vec[i].x >> position_vec[i].y;
  }

  for (int i = 0; i < question_number; i++) {
    int start;
    int arrival;
    int health;
    cin >> start >> arrival >> health;
    result_vec[i] = isMovable(position_vec[start - 1], position_vec[arrival - 1], health);
  }

  for (bool result : result_vec) {
    if (result) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
