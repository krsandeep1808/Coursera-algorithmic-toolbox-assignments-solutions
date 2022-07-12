#include <iostream>
using namespace std;

int previous_fibonacci_last_digit(unsigned long long m) {
int previous = 0, current = 1;
for (unsigned long long i = 2; i <= m; i++) {
    int tmp_previous = previous;
    previous = current;
    current = ((tmp_previous % 10) + (current % 10)) % 10;

   return current;
}

int last_digit(unsigned long long n) {
     int lastDigit = ( previous_fibonacci_last_digit(n) * ( ( previous_fibonacci_last_digit(n) + previous_fibonacci_last_digit(n - 1) ) % 10 ) ) % 10 ; // found the last digit of the sum of squares of n fib numbers

     return lastDigit;
  }
