//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  arr[  5  ]  =  {  6  ,  9  ,  7  ,  3  ,  1  }; 
//  for  (  int  i  =  4  ; i  >=  0  ; i  --  ) 
//  cout  <<  arr[i]  <<  " "  ; 
//  return  0  ; 
//  };


//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  arr[  6  ]  =  {  6  ,  2  ,  4  ,  9  ,  7  ,  8  }; 
//  int  largest  =  arr[  0  ]; 
//  for  (  int  i  =  1  ; i  <  6  ; i  ++  ) 
//  { 
//  if  (arr[i]  >  largest) 
//  largest  =  arr[i]; 
//  } 
//  cout  <<  largest; 
//  return  0  ; 
//  };


//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  arr[  8  ]  =  {  2  ,  5  ,  3  ,  -  3  ,  8  ,  4  ,  2  ,  -  6  }; 
//  for  (  int  i  =  0  ; i  <=  8  ; i  ++  ) 
//  { 
//  if  (arr[i]  %  2  ==  1  ||  arr[i]  %  2  ==-  1  ) 
//  cout  <<  arr[i]  <<  " "  ; 
//  } 
//  return  0  ; 
//  };


//  #include  <iostream> 
//  using  namespace  std  ; 
//  void  prime  (  int  num  ) 
//  { 
//  if  (  num  <  2  ) 
//  return  ; 
//  for  (  int  i  =  2  ; i  <  num  ; i  ++  ) 
//  { 
//  if  (  num  %  i  ==  0  ) 
//  return  ; 
//  } 
//  cout  <<  num  <<  " "  ; 
//  } 
//  int  main  () 
//  { 
//  int  arr[  8  ]  =  {  2  ,  3  ,  7  ,  1  ,  -  11  ,  8  ,  13  ,  12  }; 
//  for  (  int  i  =  0  ; i  <  8  ; i  ++  ) 
//  { 
//  prime  (arr[i]); 
//  } 
//  return  0  ; 
//  };


//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  arr[  5  ]  =  {  2  ,  3  ,  7  ,  -  11  ,  4  }; 
//  int  last_arr  =  arr[  4  ]; 
//  for  (  int  i  =  3  ; i  >=  0  ; i  --  ) 
//  { 
//  arr[i  +  1  ]  =  arr[i]; 
//  } 
//  arr[  0  ]  =  last_arr; 
//  for  (  int  i  =  0  ; i  <  5  ; i  ++  ) 
//  cout  <<  arr[i]  <<  " "  ; 
//  return  0  ; 
//  }; 


//  #include  <iostream> 
//  using  namespace  std  ; 
//  int  main  () 
//  { 
//  int  arr[  7  ]  =  {  2  ,  4  ,  6  ,  4  ,  2  ,  8  ,  6  }; 
//  int  ans  =  0  ; 
//  for  (  int  i  =  0  ; i  <  7  ; i  ++  ) 
//  ans  =  ans  ^  arr[i];  //xor process 
//  cout  <<  ans; 
//  return  0  ; 
//  };