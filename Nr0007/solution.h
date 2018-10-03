/*--------------------------------------------------------
 *
 * Given a 32-bit signed integer, reverse digits of an integer.
 *
 *-----------------------------------------------------------*/
#include<string>
#include<climits>

class Solution{
  public:
    long long reverse(long long x){
    // This solution is not good enough
    /*------------------------------------------
      std::string strNum;
      strNum = std::to_string(x);
      std::reverse(strNum.begin(), strNum.end());
      x = (x > 0) ? std::stol(strNum) : -std::stol(strNum);
      return x;
    -------------------------------------------*/
    long long j = 0;
    do{
      j = j * 10 + x % 10;
    }while(x /= 10);
    return (j > INT_MAX || j < INT_MIN) ? 0 : static_cast<int>(j);
  }
};
