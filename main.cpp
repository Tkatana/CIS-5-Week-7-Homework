// Homework 7 — Tyler Quintana
// CIS 5 Week 07 · Odd and Even


#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main() {
  const int N = 20;
  int values[N];

  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i < N; ++i) {
    values[i] = rand() % 100;
  }

  cout << "Array:" << endl;

  //traverses index
  for (int i = 0; i < 4; i++ ) {

cout << "[" << i << "] " << values[i] << endl; 
}

cout << "Evens: ";

for (int i = 0; i < 4; ++i) 
  
{
if (values[i] % 2 == 0){
  
cout << values[i] << " ";
} 

}
  
cout << endl << "Odds: ";

for (int i = 0; i < 4; ++i) 
  
{
if (values[i] % 2 == 1){
  
cout << values[i] << " ";
} 

}

cout << endl;  

  return 0;
}
