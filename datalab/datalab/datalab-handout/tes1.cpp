#include<iostream>
using namespace std;

int main()
{
    unsigned uf =1;
    unsigned frac = uf & 0x7fffff;
    unsigned exp = (uf & 0x7f800000) >> 23;
}