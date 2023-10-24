#include <iostream>
#include <string>
#include "vat.h"
//#include <string.h> // H file contains "declarations" 
         // char * strcpy(char * _dst, const char *__src);
         // FUNCTION HEADER
         //


using namespace std;

// int anyg(asd)

// functions
 // - ensure DRY - dont repeat yourself
// - great as documentation
// - great as abstraction


// X -> 1000
inline int test(int *x, int y, int z){
    double *f = (double *)x;
    *f=232234.0;
   //*x = 1;
   cout << x;
   return 0;
}


inline int test2(int &x, int y, int z){
   char namn[256];

   int a;
   int arr[100];

   x = 1;
   cout << x;
   return 0;
}

//abs
int ourAbsolute(int input){
   if(input < 0){
      return -input;
   }
   return input;
}


float ourAbsolute(float input){
   if(input < 0){
      return -input;
   }
   return input;
}

int main(){
   int n;
   cout << "Enter a value:";
   cin >> n;
   n = ourAbsolute(n);
   cout << n;

   float f;
   cout << "Enter a value:";
   cin >> f;
   f = ourAbsolute(f);
   cout << f;




   string name = "Stefan";
   string extra;
   cin >> extra;
   name += extra;
   int  aaa[13];

   cin >> extra;
   name += extra;


   int x = 12, y = 12, z = 13;
//   int result = test(&x,y,z); // & = address off
   int result = test2(x,y,z); // & = address off
   cout << x << endl;
   
   cout << result << endl;


   // char test[100];
   // //strcpy(test, "Hello");
   // int price = 100;
   // float percentVat = 0.25f;
   // float result2 = calculateVat(price,0.12f);
   // float result3 = calculateVat(price,0.25f);
   // float result = calculateVat(price);
   // cout << result << endl;
   return 0;
}

// FUNCTION  HEADER = declaration - DECLARES return value type, NAME, parameters datatypes
// FUNCTION BODY
// FUNCTION HEADER COULD ALSO BE PLACED SOMEWHERE ELSE


