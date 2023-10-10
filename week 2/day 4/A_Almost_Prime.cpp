#include <iostream>
using namespace std;

// A function to check if a number is prime or not
bool is_prime(int n) {
  if (n <= 1) return false; // 1 and negative numbers are not prime
  if (n == 2) return true; // 2 is the only even prime number
  if (n % 2 == 0) return false; // even numbers are not prime
  // check for odd divisors from 3 to sqrt(n)
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) return false;
  }
  return true;
}

// A function to count the number of distinct prime divisors of a number
int count_prime_divisors(int n) {
  int count = 0;
  // check for the smallest prime divisor, which is 2
  if (n % 2 == 0) {
    count++;
    // divide n by 2 until it becomes odd
    while (n % 2 == 0) {
      n /= 2;
    }
  }
  // check for odd prime divisors from 3 to sqrt(n)
  for (int i = 3; i * i <= n; i += 2) {
    if (is_prime(i) && n % i == 0) {
      count++;
      // divide n by i until it becomes indivisible by i
      while (n % i == 0) {
        n /= i;
      }
    }
  }
  // if n is greater than 1, it means it is a prime number itself
  if (n > 1) count++;
  
  return count;
}

// A function to count the number of almost prime numbers between 1 and n
int count_almost_prime(int n) {
  int count = 0;
  
  // loop through all numbers from 1 to n
  for (int i = 1; i <= n; i++) {
    // check if the number has exactly two distinct prime divisors
    if (count_prime_divisors(i) == 2) {
      count++;
    }
  }
  
  return count;
}

int main() {
  
  int n;
  
  // read the input from standard input
  cin >> n;
  
  // print the output to standard output
  cout << count_almost_prime(n) << endl;
  
}
