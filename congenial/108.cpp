#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, x, ticket;
  vector<int> seats;

  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> ticket;
    seats.push_back(ticket);
  }

  cin >> x;

  vector<int>::iterator itr = find(seats.begin(), seats.end(), x);
  if(itr != seats.end())
    cout << "Número da poltrona do vencedor: " << distance(seats.begin(), itr) << endl;
  else
    cout << "Não há vencedor " << endl;

  return 0;
}
