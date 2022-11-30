#include <iostream>


int euclidGCD (int a, int b){
  if (b== 0) return a;
  return euclidGCD(b, a%b);
}

long long lcm_naive(long long a, long long b) {
  

  return (a * b)/euclidGCD(a, b);
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}