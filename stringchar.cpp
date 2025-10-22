#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> arr1 = {'I', 'l', 'o', 'v', 'e', 'j', 'a', 'v', 'a'};
    vector<char> arr2 = {'a', 'v'};

    // Store characters to skip in a set (for O(1) lookup)
    unordered_set<char> skip(arr2.begin(), arr2.end());

    // Collect non-skipped characters and reverse them
    vector<char> rev;
    for (char c : arr1)
        if (!skip.count(c))
            rev.push_back(c);
    reverse(rev.begin(), rev.end());

    // Replace back the non-skipped characters in reversed order
    int k = 0;
    for (char &c : arr1)
        if (!skip.count(c))
            c = rev[k++];

    // Print final array
    for (char c : arr1)
        cout << c << " ";
}
