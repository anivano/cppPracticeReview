//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

     char a = 'a', b = 'b';

     //The & takes the address of an object. It denotes
     //a reference instead of a pointer
     //ptr will always point to &a
     char *const ptr = &a;
     //If we declare ptr as:
     //const char *ptr = &a
     //then it cannot modify what it points to.
     
     cout << "a " << a << endl;
     cout << "&a " << &a << endl;
     cout << "b " << b << endl;
     cout << "*ptr " << *ptr << endl;
     cout << "&ptr " << &ptr << endl;

     //We can change what ptr points to.
     *ptr = 'b';     

     cout << "a " << a << endl;
     cout << "&a " << &a << endl;
     cout << "b " << b << endl;
     cout << "&b " << &b << endl;
     cout << "*ptr " << *ptr << endl;
     cout << "&ptr " << &ptr << endl;
 
     return 0;
}
