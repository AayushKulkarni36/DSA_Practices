/*Govinda is very fond of playing with numbers. He recently innovated a new type of number named Govindanumber. He defined that number asA govinda number is a composite number, the sum of whose digits is the sum of the digits of its prime factorsobtained as a result of prime factorization (excluding 1 ). The first few such numbers are 4,22 ,27 ,58 ,85 ,94 and121 . For example, 378 = 2 × 3 × 3 × 3 × 7 is a govinda number since 3 + 7 + 8 = 2 + 3 + 3 + 3 + 7. Write a program to check whether a given integer is a govinda number.He gave Kumail bhaiya a number and asked to identify that this number is govinda number or not. As Kumail bhaiya is so tired, can you help him to identify the same?Input FormatThere will be only one line of input:N , the number which needs to be checked.Constraints1 < N < 2,147,483,647 (max value of an integer of the size of 4 bytes)Output Format1 if the number is a Govinda number. 0 if the number is a not Govinda number.Sample Input456Sample Output0*/
#include<bits/stdc++.h>
using namespace std;
bool GovindaNumber(int n)
{int temp1=n;
    int temp2=n;
    int i=2;
    int sum=0;
    int sum1=0;

    while(n!=1)
    {
        int last =temp2%10;
        sum+=last;
        temp2/=10;
        
        if(n%i==0)
        {
            cout<<i<<" ";
            sum1+=i;
            n=n/i;
            continue;
        }
        i++;
    }
   // cout<<endl<<"Mul:"<<mul;
    cout<<endl<<"Sum:"<<sum;
    if(sum==sum1) return 1;
    else return 0;
}
int main()
{
  
    if(GovindaNumber(378))
        cout<<"\ntrue";
    else cout<<"\nfalse";
}