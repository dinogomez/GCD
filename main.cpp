#include <iostream>
#include <algorithm> 
#include <chrono>
#include <stdlib.h>

using namespace std;

// GCD START
// FUNCTION DECLARATIONS
// [Euclid's Alogrithm]
// If n=0; return the value else
// r = m mod n, R is the remainder of m / n
// m = n and n = r then loop
int gcd_euclid(int m, int n){
  int r = 0;
  while(n!=0){
    r = m%n;
    m = n;
    n = r;
  }
  return m;
}
// [Integer Checking Algorithm]
// Limitation are when input arguments are 0
int gcd_consecutive_integer_checking(int m, int n){
  
  int min = std::min(m,n);
  

  while(min!=0){

    if(m%min == 0 && n%min == 0){
    return min;
   } 
    min--;
  }

  return 0;
}
// Menu Render
void gcd_menu(){
  cout << "\t\tSEG31-Algorithm C++ Compilation - GCD MODULE" << endl;
  cout << "\t\t\t \033[1;33mCompiled by Paul-SEG31-2021\033[0m" << endl; 
  cout << "\n\n";
  cout << "\t\t\033[1;32m[Chapter 1: Introduction to Algorithms]\033[0m\n" << endl;

  cout << "<=======================[GCD START]=======================>" << endl << endl;
  cout << "Please note that the program has \"\033[1;32mNO VALIDATION\033[0m\" for input." << endl << endl;
    int m,n;
    cout << "Enter the Value of \"m\":";
    cin >> m;
    cout << "Enter the Value of \"n\":";
    cin >> n;
    cout << "\n";
    cout << "Current Values of \"\033[1;32mm\033[0m\" = \"\033[1;36m" << m << "\033[0m\"" << endl;
    cout << "Current Values of \"\033[1;32mn\033[0m\" = \"\033[1;36m" << n << "\033[0m\"" << endl;

  cout << "\n";
  // EUCLID 
  // Timer
  auto t1 = std::chrono::high_resolution_clock::now();
  cout << "gcd_euclid("<<m<<","<<n<<") returns :: " << "\033[1;31m" << gcd_euclid(m,n) << "\033[0m\n";
  auto t2 = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
      cout << "\t ├───executed in :: " << "\033[1;32m" << duration << "\033[0m ms\n" << endl;

  // Consecutive Integer Checking
  t1 = std::chrono::high_resolution_clock::now();
  cout << "gcd_consecutive_integer_checking("<<m<<","<<n<<") returns :: " << "\033[1;31m" << gcd_consecutive_integer_checking
    (m,n) << "\033[0m\n";
    t2 = std::chrono::high_resolution_clock::now();

    duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
      cout << "\t ├───executed in :: " << "\033[1;32m" << duration << "\033[0m ms\n" << endl;

  cout << "<=======================[GCD END]=======================>" << endl << endl;
  char choice = 'y';
  cout << "\n\nContinue? y/n:";
  cin >> choice;
  cout << "\n";
  if(choice == 'y' || choice == 'Y'){
    system("clear");
    gcd_menu();
  } else {
    exit(1);
  }
}
// GCD END

int main(){
  gcd_menu();
  
  return 0;
}