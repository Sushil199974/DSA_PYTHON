// #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//         { 
//  int  first_num  =  20  ; 
//  int  second_num  =  30  ; 
//  if  (first_num  >  second_num) 
//         { 
//  cout  <<  first_num; 
//      } 
//  else 
//         { 
//  cout  <<  second_num; 
//     } 
//  return  0  ; 
// };


// #include <iostream>
// using namespace std;

// int main() {
//     int num = 25;

//     // Check if the number is even or odd
//     if (num % 2 == 0) {
//         cout << "Even";
//     } else {
//         cout << "Odd";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int num = 0;

//     if (num > 0) {
//         cout << "It is a Positive Number";
//     } else if (num < 0) {
//         cout << "It is a Negative Number";
//     } else {
//         cout << "It is Zero";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 20, b = 40, c = 60;

//     if (a >= b && a >= c) {
//         cout << a;
//     } else if (b >= a && b >= c) {
//         cout << b;
//     } else {
//         cout << c;
//     }

//     return 0;
// }

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  year; 
//  cout  <<  "Enter Your Year: "  ; 
//  cin  >>  year; 
//  if  ((year  %  400  ==  0  )  ||  (year  %  4  ==  0  &&  year  %  100  !=  0  )) 
//  cout  <<  "Leap Year"  ; 
//  else 
//  cout  <<  "Not a Leap Year"  ; 
//  return  0  ; 
//  }; 

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  char  c  =  'a';   ; 
//  if  (c  ==  'a'  ||  c  ==  'e'  ||  c  ==  'i'  ||  c  ==  'o'  ||  c  ==  'u'  ) 
//  cout  <<  "Vowel"  ; 
//  else 
//  cout  <<  "Consonant"  ;
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  num  =  27  ; 
//  if  (num  %  3  ==  0  &&  num  %  5  ==  0  ) 
//  cout  <<  "Perfect"  ; 
//  else 
//  cout  <<  "Not Perfect"  ; 
//  return  0  ; 
//  }; 


//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  num1, num2; 
//  cout  <<  "Enter num1: "  ; 
//  cin  >>  num1; 
//  cout  <<  "Enter num2: "  ; 
//  cin  >>  num2; 
//  int  sum; 
//  sum  =  num1  +  num2; 
//  cout  <<  "Your Sum is :"  <<  sum; 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  for  (  int  num  =  1  ; num  <=  10  ; num  ++  ) 
//  cout  <<  num  <<  " "  ; 
//  return  0  ; 
//  };

// #include  <iostream> 
// using  namespace  std ; 
// int  main () 
// { 
// for (  int  num = 1 ; num <= 20 ; num ++ ) 
// { 
// if (num % 2 == 0 ) 
// cout << num << " " ; 
// } 
// return  0 ; 
// };



// #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  n; 
//  cout  <<  "Enter Number: "  ; 
//  cin  >>  n; 
//  if  (n  <  2  ) 
//  { 
//  cout  <<  "Not a Prime"  ; 
//  return  0  ; 
//  } 
//  for  (  int  num  =  2  ; num  <=  n  -  1  ; num  ++  ) 
//  { 
//  if  (n  %  num  ==  0  ) 
//  { 
//  cout  <<  "Not a Prime"  ; 
//  return  0  ; 
//  } 
//  }; 
//  cout  <<  "Prime Number"  ; 
//  return  0  ; 
//  };


//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  num  =  3  ; 
//  for  (  int  i  =  1  ; i  <=  10  ; i  ++  ) 
//  cout  <<  num  <<  " * "  <<  i  <<  " ="  <<  num  *  i  <<endl  ; 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  n; 
//  cout  <<  "Enter Number: "  ; 
//  cin  >>  n; 
//  int  first_num  =  0  ; 
//  int  second_num  =  1  ; 
//  int  current_num; 
//  if  (n  ==  1  ) 
//  { 
//  cout  <<  0  ; 
//  return  0  ; 
//  } 
//  if  (n  ==  2  ) 
//  { 
//  cout  <<  1  ; 
//  return  0  ; 
//  } 
//  for  (  int  i  =  3  ; i  <=  n; i  ++  ) 
//  { 
//  current_num  =  first_num  +  second_num; 
//  first_num  =  second_num; 
//  second_num  =  current_num; 
//  } 
//  cout  <<  current_num; 
//  return  0  ; 
//  };

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; 
//     int first_num = 0, second_num = 1, current_num;

//     cout << "Fibonacci numbers up to " << n << ": " << endl;

   
//     if (n >= 1) cout << first_num << " ";

    
//     if (n >= 2) cout << second_num << " ";

   
//     for (int i = 3; i <= n; i++) {
//         current_num = first_num + second_num;
//         cout << current_num << " ";
//         first_num = second_num;
//         second_num = current_num;
//     }

//     return 0;
// }

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  n  =  3  >  2  >  1  ; 
//  cout  <<  n; 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  n  =  3  *  2  -  10  /  5  ; 
//  cout  <<  n; 
//  return  0  ; 
//  };
#include <iostream>
using namespace std;

// int main() {
//     // Outer loop for rows
//     for (int row = 1; row <= 5; row++) {  
//         // Nested loop for columns
//         for (int col = 1; col <= 5; col++) {
//             cout << "1 ";  // Print 1 followed by a space
//         }
//         cout << endl;  // Move to the next line after each row
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

// int main() {
//     // Outer loop for rows
//     for (int row = 1; row <= 5; row++) {  
//         // Nested loop for columns
//         for (int col = 1; col <= 5; col++) {
//             cout << col <<" ";  // Print 1 followed by a space
//         }
//         cout << endl;  // Move to the next line after each row
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     // Outer loop for rows
//     for (int row = 1; row <= 5; row++) {  
//         // Nested loop for columns
//         for (int col = 5; col >= 1; col--) {
//             cout << col <<" ";  // Print 1 followed by a space
//         }
//         cout << endl;  // Move to the next line after each row
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int counter = 1;

//     for (int row = 1; row <= 5; row++) {  
//         for (int col = 1; col <= 5; col++) {
//             cout << counter << " ";
//             counter++;  
//         }
//         cout << endl;  
//     }

//     return 0;
// }


//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  n; 
//  cout  <<  "Enter Star Row: "  ; 
//  cin  >>  n; 
//  for  (  int  row  =  1  ; row  <=  n; row  ++  ) 
//  { 
//  for  (  int  col  =  1  ; col  <=  row; col  ++  ) 
//  { 
//  cout  <<  "*"  <<  " "  ; 
//  } 
//  cout  <<endl  ; 
//  } 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  n; 
//  cout  <<  "Enter Star Row: "  ; 
//  cin  >>  n; 
//  for  (  int  row  =  1  ; row  <=  n; row  ++  ) 
//  { 
//  for  (  int  col  =  1  ; col  <=  row; col  ++  ) 
//  { 
//  cout  <<  col  <<  " "  ; 
//  } 
//  cout  <<endl  ; 
//  } 
//  return  0  ; 
//  };


//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  n; 
//  cout  <<  "Enter Star Row: "  ; 
//  cin  >>  n; 
//  for  (  int  row  =  1  ; row  <=  n; row  ++  ) 
//  { 
//  char  c  =  'a'  +  row  -  1  ; 
//  for  (  int  col  =  1  ; col  <=  n; col  ++  ) 
//  cout  <<  c  <<  " "  ; 
//  cout  <<endl  ; 
//  } 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  n; 
//  cout  <<  "Enter Star Row: "  ; 
//  cin  >>  n; 
//  for  (  int  row  =  1  ; row  <=  n; row  ++  ) 
//  { 
//  char  c  =  'a'  +  row  -  1  ; 
//  for  (  int  col  =  1  ; col  <=  row; col  ++  ) 
//  cout  <<  c  <<  " "  ; 
//  cout  <<endl  ; 
//  } 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  for  (  int  i  =  0  ; i  <  5  ; i  ++  ) 
//  { 
//  for  (  int  j  =  0  ; j  <  i; j  ++  ) 
//  cout  <<  " "  ; 
//  for  (  int  j  =  i; j  <  5  ; j  ++  ) 
//  { 
//  cout  <<  j  +  1  ; 
//  } 
//  cout  <<  endl  ; 
//  } 
//  return  0  ; 
//  };