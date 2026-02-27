// // Longest substring without repeating character using brute force approch 

// #include <iostream>
// using namespace std;

// bool isUnique(string s, int start, int end)
// {
//     bool visit[256] = {false};
//     for (int i = start; i <= end; i++)
//     {
//         if (visit[s[i]])
//         {
//             return false;
//         }
//         visit[s[i]] = true;
//     }
//     return true;
// }

// int longestSubstring(string s)
// {
//     int n = s.length();
//     int maxLen = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (isUnique(s, i, j))
//             {
//                 maxLen = max(maxLen, j - i + 1);
//             }
//         }
//     }
//     return maxLen;
// }

// int main()
// {
//     string s;
//     cout << "Enter the string:: ";
//     cin >> s;

//     cout << "Length of longest substring:: ";
//     cout << longestSubstring(s);
//     return 0;
// }




// Longest substring without reapeting character using optimiize approch

#include<iostream>
#include<vector>
using namespace std;

int longestOfSubstring(string s){
    vector<bool> count(256,0);
    int first=0,second=0,len=0;
    while (second<s.size()){
        while(count[s[second]]){
            count[s[second]]=0;
            first++;
        }
        count[s[second]]=1;
        len=max(len,second-first+1);
        second++;
    }
    return len;
}
    
int main()
{
    string s;
    cout<<"Enter the string:: ";
    cin>>s;

    cout<<"Length of longest substring:: "<<longestOfSubstring(s);

return 0;
}