#include <cmath>
int centuryFromYear(int year) 
{
  
    return std::ceil(year / 100.0);
    
    // if (year % 100 == 0) {
    //     return year / 100;
    // } else {
    //     return year / 100 + 1;
    // }

}