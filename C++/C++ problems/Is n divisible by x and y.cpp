bool isDivisible(int n, int x, int y) {
  // your code here
  if (n % x == 0 && n % y == 0)
    {
    return true;
  }
  return false;

  // return n % x == 0 && n % y == 0 ? true : false;
  // return n % x == 0 && n % y == 0 ;

}