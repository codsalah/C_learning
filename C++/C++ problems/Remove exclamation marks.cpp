#include <string>

std::string removeExclamationMarks(std::string str){
  std::string eraser = ""; 
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '!')
    {
      continue;
    }
    eraser += str[i]; 
  }
  return eraser;
}