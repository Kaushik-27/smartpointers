#include "uniqueptr.h"
#include "uniqueptr.cpp"
#include <string.h>
#include <stdio.h>

using namespace std;

int main (int argc, char* argv[])
{
   uniqueptr<int> ptr;
   *ptr = 20;

   printf("Value  = %d\n",*ptr);
}