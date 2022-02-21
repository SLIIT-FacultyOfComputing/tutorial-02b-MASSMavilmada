/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}


long nCr(int n, int r)
{
    int facn = 1;
    for(int x=n; x>=1; x--)
    {
        facn = facn * x;
    }

    int facr = 1;
    for(int y=r; y>=1; y--)
    {
        facr = facr * y;
    }

    int NR = (n-r);
    int facnr = 1;
    for(int z=NR; z>=1; z--)
    {
        facnr = facnr * z;
    }

  return  ((facn/(facr * facnr)));

}