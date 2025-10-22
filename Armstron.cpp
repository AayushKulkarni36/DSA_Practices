/*Lucky NumberYou are given a number and your task is to check whether this number is a lucky number or not.A lucky number is defined as followsA positive integer of n digits is called an lucky number of order n (order is number of digits) if.abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + …. 1634 is an lucky number as 1634 = 1^4 + 6^4 + 3^4 + 4^4371 is an lucky number as 371 = 3^3 + 7^3 + 1^3Input FormatSingle line input containing an integerConstraintsQ66. code-5 marks

  0 < N < 1000000000Output FormatPrint boolean output for each testcase."true" if the given number is an Lucky Number, else print "false".Sample Input371Sample OutputtrueExplanation:- Use functions. Write a function to get check if the number is lucky number or not. Numbers are luckyif it is equal to sum of each digit raised to the power of number of digits*/

#include<bits/stdc++.h>
using namespace std;
bool LuckyNumber(int n)
{
    int digits = n==0?1:log10(n)+1;
    int sum=0;
    int temp=n;
    
    while(n!=0)
    {
    int last = n%10;
    n/=10;

    int pow=1;
    for(int i=0;i<digits;i++)
        pow*=last;      
    
    sum+=pow;
   
}
    
    if(temp==sum)return true;
    return false;
}
int main()
{
  
    if(LuckyNumber(1634))
        cout<<"true";
    else cout<<"false";
}