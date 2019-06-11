#include <bits/stdc++.h>
using namespace std;

int main() {
  struct restaurant {
    string name;
    int score;
    int number;
  };

  int N;
  cin >> N;
  vector<restaurant> restaurants(N);

  for (int i = 0; i < N; i++){
    cin >>  restaurants.at(i).name >> restaurants.at(i).score;
    restaurants.at(i).number = i + 1;
  }
  sort(restaurants.begin(), restaurants.end(),
       [](const restaurant& x, const restaurant& y) { return x.name < y.name;});
  for (int i = 0; i < N; i++){
    cout << restaurants.at(i).number << endl;
  }
}
