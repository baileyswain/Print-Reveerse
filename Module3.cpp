// C++ program to print reverse
// of words in a string.

#include<iostream>

using namespace std;

int main()
{
   int num1, num2, num3;
   cout << "Enter 3 integers, with spaces between each input: ";
   cin >> num1 >> num2 >> num3;
   // create pointers
   int* ptr1;
   int* ptr2;
   int* ptr3;
   // allocate pointers
   ptr1 = new int(num1);
   ptr2 = new int(num2);
   ptr3 = new int(num3);
   cout << "\nDisplay integers using integer variables: " << num1 << ", " << num2 << " & " << num3 << endl;
   cout << "Display integers using pointers: " << *ptr1 << ", " << *ptr2 << " & " << *ptr3 << endl;

   delete ptr1;

   delete ptr2;

   delete ptr3;

   return 0;
}


