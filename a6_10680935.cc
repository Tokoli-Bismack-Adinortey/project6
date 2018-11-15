#include <iostream>
#include <cmath>
using namespace std;

// the function
int binarySearch(int L[],int x, int first, int last)
{
  //int middle = (first + last) / 2;

  if (last >= first)  //first > last)
    {
      //return -1;
      int middle = (first + last) / 2;

      if (x == L[middle])
        return middle;
      else if (x < L[middle])
        return binarySearch(L, x, first, middle - 1);
      else //(x > L[middle])
        return binarySearch(L, x, middle + 1, last);
    }
  return -(first + 1);    // failed to find key
}

int main()
{
  /* int myList[size] = n;
  int myfirst = 0;
  int mylast = n - 1;
  int findthis;*/

  int myList[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

  int size;
  //int myList[size];
  int n = myList[size];
  int myfirst = 0;
  int mylast = n - 1;
  int findthis;

  cout << "Please enter a number to find: " << endl;
  cin >> findthis;

  int resultloc = binarySearch(myList, findthis, myfirst, mylast);
  //Right here it suppose to display the result based on the function, if   //number enter was found it displays that it was found and it's position, if it //wasn't found it tells us "number not found" i don't know the syntax for it   //though

  return 0;
}