/* left shift <<
 right shift >> 
left shift => num << i position ie. 7<<2(7 should be shifted left 2 times)
here bit shifting will ne done , not a number shifting
7 = 00000111
 0 0 0 0 0 1 1 1
 _ _ _ _ _ _ _ _
we need to shift it for 2 its , but now wll do only one 
   0 0 0 0 1 1 1
   _ _ _ _ _ _ _ _  ... now this empty space will be filled with '0' 
   0 0 0 0 1 1 1 0
   _ _ _ _ _ _ _ _ _ 

last one  more bit shift
  0 0 0 1 1 1 0
  _ _ _ _ _ _ _ _ ... now this empty space will be filled with '0'
  0 0 0 1 1 1 0 0   => (28)10 decimal
  _ _ _ _ _ _ _ _ 


 in left shift we remove left side element and add '0' to the right
 left shift => a<<b => a*2^b
 in right shift we remove right side element and add '0' to the left
right shift => a>>b => a/2^b        */