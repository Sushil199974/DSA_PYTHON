//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  Total_rows; 
//  cout  <<  "Enter star number: "  ; 
//  cin  >>  Total_rows; 
//  for  (  int  row  =  1  ; row  <=  Total_rows; row  ++  ) 
//  { 
//  // for space 
//  for  (  int  col  =  1  ; col  <=  Total_rows  -  row;  col  ++  ) 
//  cout  <<  " "  ; 
//  // For Star 
//  for  (  int  col  =  1  ; col  <=  2  *  row  -  1  ; col  ++  ) 
//  cout  <<  "*"  ; 
//  cout  <<  endl  ; 
//  } 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  Totat_rows; 
//  cout  <<  "Enter Row Number: "  ; 
//  cin  >>  Totat_rows; 
//  for  (  int  row  =  1  ; row  <=  Totat_rows; row  ++  ) 
//  { 
//  // for space 
//  for  (  int  col  =  1  ; col  <=  Totat_rows  -  row;  col  ++  ) 
//  cout  <<  " "  ; 
//  // For Star and Inner Space 
//  for  (  int  col  =  1  ; col  <=  row; col  ++  ) 
//  cout  <<  "* "  ; 
//  cout  <<  endl  ; 
//  } 
//  return  0  ; 
//  }; 

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  n; 
//  //Total_row = n 
//  cout  <<  "Enter The row Num: "  ; 
//  cin  >>  n; 
//  // upper side 
//  for  (  int  row  =  1  ; row  <=  n; row  ++  ) 
//  { 
//  // star 
//  for  (  int  col  =  1  ;col  <=  row;col  ++  ) 
//  cout  <<  "*"  ; 
//  // space 
//  for  (  int  col  =  1  ;col  <=  2  *  n  -  2  *  row;col  ++  ) 
//  cout  <<  " "  ; 
//  // star 
//  for  (  int  col  =  1  ;col  <=  row;col  ++  ) 
//  cout  <<  "*"  ; 
//  cout  <<endl  ; 
//  } 
//  // lower side 
//  for  (  int  row  =  1  ; row  <=  n  -  1  ; row  ++  ) 
//  { 
//  // star 
//  for  (  int  col  =  1  ;col  <=  n  -  row; col  ++  ) 
//  cout  <<  "*"  ; 
//  // space 
//  for  (  int  col  =  1  ;col  <=  2  *  row; col  ++  ) 
//  cout  <<  " "  ; 
//  // star 
//  for  (  int  col  =  1  ;col  <=  n  -  row; col  ++  ) 
//  cout  <<  "*"  ; 
//  cout  <<endl  ; 
//  } 
//  return  0  ; 
//  };


 
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int digit = 0;  

   
//     if (n == 0) {
//         cout << "1";
//         return 0;
//     }

    
//     while (n > 0) {
//         n /= 10;  
//         digit++;  
//     }

//     cout << digit;  
//     return 0;
// }


//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  n; 
//  cout  <<  "Enter Your Digit: "  ; 
//  cin  >>  n; 
//  int  Digit  =  0  ; 
//  while  (n) 
//  { 
//  Digit  ++  ; 
//  n  =  n  /  10  ; 
//  } 
//  cout  <<  Digit; 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  num; 
//  cout  <<  "Enter Number: "  ; 
//  cin  >>  num; 
//  int  sum  =  0  ; 
//  while  (num) 
//  { 
//  int  digit  =  num  %  10  ; 
//  sum  =  sum  *  10  +  digit; 
//  num  =  num  /  10  ; 
//  } 
//  cout  <<  sum; 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  num, sum  =  0  , mul  =  1  ; 
//  cout  <<  "Enter Your Numbers: "  ; 
//  cin  >>  num; 
//  while  (num  >  0  ) 
//  { 
//  int  digit  =  num  %  2  ; 
//  sum  =  sum  +  digit  *  mul; 
//  num  =  num  /  2  ; 
//  mul  =  mul  *  10  ; 
//  }; 
//  cout  <<  sum; 
//  return  0  ; 
//  }; 

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  num, sum  =  0  , mul  =  1  ; 
//  cout  <<  "Enter Binary Digit: "  ; 
//  cin  >>  num; 
//  while  (num  >  0  ) 
//  { 
//  int  rem  =  num  %  10  ; 
//  num  =  num  /  10  ; 
//  sum  =  sum  +  rem  *  mul; 
//  mul  =  mul  *  2  ; 
//  } 
//  cout  <<  sum; 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  num; 
//  for  (  int  i  =  1  ; i  <=  10  ; i  ++  ) 
//  { 
//  if  (i  ==  6  ) 
//  break  ; 
//  cout  <<  i  <<  " "  ; 
//  } 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  num; 
//  for  (  int  i  =  1  ; i  <=  10  ; i  ++  ) 
//  { 
//  if  (i  ==  6  ) 
//  continue  ; 
//  cout  <<  i  <<  " "  ; 
//  } 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  num; 
//  cout  <<  "Enter the Num: "  ; 
//  cin  >>  num; 
//  switch  (num) 
//  { 
//  case  1  : cout  <<  "Sunday"  ; 
//  break  ; 
//  case  2  : cout  <<  "Munday"  ; 
//  break  ; 
//  case  3  : cout  <<  "Tuesday"  ; 
//  break  ; 
//  case  4  : cout  <<  "Wednesday"  ; 
//  break  ; 
//  case  5  : cout  <<  "Thursday"  ; 
//  break  ; 
//  case  6  : cout  <<  "Friday"  ; 
//  break  ; 
//  case  7  : cout  <<  "Saturday"  ; 
//  break  ; 
//  default  : cout  <<  "Number not valid"  ; 
//  } 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  void  IsEvenOdd  (  int  num  ) 
//  { 
//  if  (  num  %  2  ==  0  ) 
//  cout  <<  "Even"  <<endl  ; 
//  else 
//  cout  <<  "Odd"  <<endl  ; 
//  return  ; 
//  } 
//  int  main  () 
//  { 
//  int  num1, num2, num3; 
//  cin  >>  num1  >>  num2  >>  num3; 
//  IsEvenOdd  (num1); 
//  IsEvenOdd  (num2); 
//  IsEvenOdd  (num3); 
//  return  0  ; 
//  }; 

// #include  <iostream> 
//  using  namespace  std  ; 
//  void  Add  () 
//  { 
//  cout  <<  8  +  4  ; 
//  } 
//  int  main  () 
//  { 
//  Add  (); 
//  return  0  ; 
//  };

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  AddTwoNum  (  int  num1  ,  int  num2  ) 
//  { 
//  int  sum  =  num1  +  num2  ; 
//  return  sum; 
//  } 
//  int  main  () 
//  { 
//  int  num1, num2; 
//  cin  >>  num1  >>  num2; 
//  int  result  =  AddTwoNum  (num1,num2); 
//  cout  <<  result; 
//  return  0  ; 
//  }; 

//  #include  <iostream> 
//  using  namespace  std  ; 
//  void  PrintTable  (  int  n  ) 
//  { 
//  for  (  int  i  =  1  ; i  <=  10  ; i  ++  ) 
//  cout  <<  n  *  i  <<endl  ; 
//  return  ; 
//  } 
//  int  main  () 
//  { 
//  int  n; 
//  cin  >>  n; 
//  PrintTable  (n); 
//  return  0  ; 
//  }  ; 

//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  PrintFactorial  (  int  num  ) 
//  { 
//  int  total  =  1  ; 
//  for  (  int  i  =  1  ; i  <=  num  ; i  ++  ) 
//  total  =  total  *  i; 
//  return  total; 
//  } 
//  int  main  () 
//  { 
//  int  num; 
//  cin  >>  num; 
//  int  result  =  PrintFactorial  (num); 
//  cout  <<  result; 
//  return  0  ; 
//  }; 

//  #include  <iostream> 
//  using  namespace  std  ; 
//  // create function 
//  int  avgTwoNum  (  int  num1  ,  int  num2  ) 
//  { 
//  int  sum  =  num1  +  num2  ; 
//  int  avg  =  sum  /  2  ; 
//  return  avg; 
//  } 
//  int  main  () 
//  { 
//  int  num1, num2; 
//  cout  <<  "Enter Num1: "  ; 
//  cin  >>  num1; 
//  cout  <<  "Enter Num2: "  ; 
//  cin  >>  num2; 
//  int  result  =  avgTwoNum  (num1,num2); 
//  cout  <<  result; 
//  return  0  ; 
//  }; 

//   #include  <iostream> 
//  using  namespace  std  ; 
//  void  findPrime  (  int  num  ) 
//  { 
//  if  (  num  <  2  ) 
//  { 
//  cout  <<  "Not Prime"  ; 
//  } 
//  for  (  int  i  =  2  ; i  <  num  ; i  ++  ) 
//  { 
//  if  (  num  %  i  ==  0  ) 
//  { 
//  cout  <<  "Not Prime"  ; 
//  return  ; 
//  } 
//  else 
// cout << "Prime" ; 
// return ; 
// } 
// } 
// int  main () 
// { 
// int  num; 
// cout << "Enter Num: " ; 
// cin >> num; 
// findPrime (num); 
// return  0 ; 
// }; 

// #include <iostream>
// using namespace std;

// Function to print Fibonacci series up to n terms
// void printFibonacci(int n) {
//     int a = 0, b = 1, next;
//     cout << "Fibonacci Series up to " << n << " terms: ";

    
//     if (n >= 1) cout << a << " ";
    
    
//     if (n >= 2) cout << b << " ";

//     for (int i = 3; i <= n; ++i) {
//         next = a + b;
//         cout << next << " ";
//         a = b;
//         b = next;
//     }
//     cout << endl;
// }

// int main() {
//     int n;

    
//     cout << "Enter the number of terms for Fibonacci series: ";
//     cin >> n;

 
//     printFibonacci(n);

//     return 0;
// }

// #include <iostream>
// using namespace std;


// void print1to10() {
//     for (int i = 1; i <= 10; i++) {
//         cout << i << " ";
//     }
//     cout << endl;  /
// }

// int main() {
   
//     print1to10();
//     return 0;
// }



// #include <iostream>
// using namespace std;


// void print(int num = 5);

// int main() {
//     int num;
//     cin >> num;      
//     print(num);       
//     print();          
//     return 0;
// }

// // Function definition
// void print(int num) {
//     for (int i = 1; i <= num; i++) {
//         cout << i << " ";
//     }
//     cout << endl;  
// }


