/* Question 6:Running with Alice and BobQuestion Statement: Alice and Bob recently got into running, and decided to compare how much they ran ondifferent days.They each ran for N days —  on the ith day, Alice ran Ai meters and Bob ran Bi meters. On each day,Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.For example:If Alice ran 200 meters and Bob ran 500, Alice would be unhappy but Bob would be happy.If Alice ran 500 meters and Bob ran 240, Alice would be happy and Bob would be unhappy.If Alice ran 300 meters and Bob ran 500, both Alice and Bob would be happy.On how many of the N days were both Alice and Bob happy?Input format:Each test case consists of multiple lines of input.The first line of the test case contains single integer N- number of days.The second line contains N space-separated integers, the array A, the distance run by the Alice on the N days.The third line contains N space-separated integers, the array B, the distance run by the Bob on the N days.Output Format:For each test case, output on a new line the number of days when both Alice and Bob were happy.Example:Input:3 //N- number of days100 200 300 //the array A, the distance run by the Alice on the N days300 200 100 // the array B, the distance run by the Bob on the N daysOutput:1Explanation:Alice is unhappy on the first day, since she ran 100 meters but Bob ran 300; and 300 is more than twiceof 100. Similarly, Bob is unhappy on the third day.Both Alice and Bob are happy on the second day, so the answer is 1.

*/

#include <bits/stdc++.h>
using namespace std;
int BothHappy(int Alice[], int Bob[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Alice[i] > Bob[i] * 2)
        {
        }

        else if (Alice[i] * 2 < Bob[i])
        {
        }

        else
            cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n; // no. of days;
    int Alice[10];
    int Bob[10];
    for (int i = 0; i < n; i++)
        cin >> Alice[i];
    for (int i = 0; i < n; i++)
        cin >> Bob[i];
    int happy = BothHappy(Alice, Bob, n);
    cout << happy;
}