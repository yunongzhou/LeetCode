/*-------------------------------------------------------------------
 *
 * Implement atoi which converts a string to an integer.
 *
 * The function first discards as many whitespace characters as necessary until 
 * the first non-whitespace character is found. Then, starting from this 
 * character, takes an optional initial plus or minus sign followed by as many 
 * numerical digits as possible, and interprets them as a numerical value.
 *
 * The string can contain additional characters after those that form the 
 * integral number, which are ignored and have no effect on the behavior of this
 * function.
 *
 * If the first sequence of non-whitespace characters in str is not a valid 
 * integral number, or if no such sequence exists because either str is empty or
 * it contains only whitespace characters, no conversion is performed.
 *
 * If no valid conversion could be performed, a zero value is returned.
 *
 * Note:
 *
 * Only the space character ' ' is considered as whitespace character.
 * Assume we are dealing with an environment which could only store integers 
 * within the 32-bit signed integer range: [−231,  231 − 1]. If the numerical 
 * value is out of the range of representable values, INT_MAX (231 − 1) or 
 * INT_MIN (−231) is returned.
 *
 *-----------------------------------------------------------------------*/
#include<string>
#include<iostream>

class Solution{
  public:
    int myAtoi(std::string str){
      // this solution cannot deal with "+35662djskjf"
      
      //if(str == "") return 0;

      //str.erase(0, str.find_first_not_of(' '));
      //str.erase(str.find_last_not_of(' ') + 1);

      //int neg = 1;
      //for(auto iter = str.begin(); iter != str.end(); ++iter){
      //  if(*iter == '-' && isdigit(*(iter+1))) neg = -1;
      //}

      //auto iter = (neg > 0) ? &str[0] : &str[1];
      //std::string strNum;
      //while(isdigit(*iter)){
      //  strNum += *iter;
      //  iter += 1;
      //}

      //long long num = 0;
      //for(auto iter = strNum.begin(); iter < strNum.end(); ++iter){
      //  num = num * 10 + (*iter - '0');
      //  if(num > INT_MAX) break;
      //}
      //num *= neg;

      //if(num > INT_MAX) return INT_MAX;
      //else if(num < INT_MIN) return INT_MIN;

      //return num;

      if(str == "") return 0;

      str.erase(0, str.find_first_not_of(' '));
      str.erase(str.find_last_not_of(' ')+1);

      auto iter = str.begin();
      int sign = 1;

      while(iter != str.end() && *iter == ' ') iter++;
      if(iter == str.end()) return 0;
      if(*iter == '+'){
        sign = 1;
        iter++;
      }
      else if(*iter == '-'){
        sign = -1;
        iter++;
      }

      long long num = 0;
      for(; iter != str.end(); ++iter){
        if(*iter < '0' || *iter > '9') break;
        num = num * 10 + (*iter - '0');
        if(num > INT_MAX) break;
      }

      num *= sign;
      if(num > INT_MAX) return INT_MAX;
      if(num < INT_MIN) return INT_MIN;
      return num;
    }
};
