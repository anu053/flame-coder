#include<iostream>
using namespace std;
int main()
{
    int a=5;
   int *b=&a;
   cout<<*b<<endl;
   int** c = &b;
   cout<<c;
}
