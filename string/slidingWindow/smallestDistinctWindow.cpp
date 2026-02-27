// // brute force approach

// #include<iostream>
// #include<unordered_set>
// using namespace std;

// string smallestWindow(string s){
//     int n=s.length();

//     unordered_set<char>distinct(s.begin(),s.end());
//     int totalDistinct=distinct.size();

//     int minLen=n+1;
//     string ans="";

//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             unordered_set<char>temp;
//             for(int k=i;k<=j;k++){
//                 temp.insert(s[k]);
//             }

//             if(temp.size()==totalDistinct){
//                 if(j-i+1<minLen){
//                     minLen=j-i+1;
//                     ans=s.substr(i,minLen);
//                 }
//             }
//         }
//     }
//     return ans;
// }

// int main()
// {
//      string s;
//     cout<<"Enter the string:: ";
//     cin>>s;

//     cout<<"Length of longest substring:: "<<smallestWindow(s);
// return 0;
// }

// Optimise approach

#include <iostream>
#include <vector>
using namespace std;

int findSubString(string s)
{
    vector<int> count(256, 0);
    int first = 0, second = 0, diff = 0, len = s.size();

    while (first < s.size())
    {
        if (count[s[first]] == 0)
        {
            diff++;
        }
        count[s[first]]++;
        first++;
    }

    for (int i = 0; i < 256; i++)
    {
        count[i] = 0;
    }

    first = 0;
    while (second < s.size())
    {
        while (diff && second < s.size())
        {
            if (count[s[second]] == 0)
            {
                diff--;
            }
            count[s[second]]++;
            second++;
        }
        len = min(len, second - first);
        while (diff != 1)
        {
            len = min(len, second - first);
            count[s[first]]--;
            if (count[s[first]] == 0)
            {
                diff++;
            }
            first++;
        }
    }
    return len;
}

int main()
{
    string s;
    cout << "Enter the string:: ";
    cin >> s;

    cout << "Length of longest substring:: " << findSubString(s);

    return 0;
}
