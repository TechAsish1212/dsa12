// #include <iostream>
// using namespace std;

// int longestPrefixSuffix(string s)
// {
//     int n = s.length();

//     for (int i = n - 1; i > 0; i--)
//     {
//         bool match = true;
//         for (int j = 0; j < i; j++)
//         {
//             if (s[j] != s[n - i + j])
//             {
//                 match = false;
//                 break;
//             }
//         }
//         if (match)
//         {
//             return i;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     string s;
//     cout << "Enter the string:: ";
//     cin >> s;

//     cout << "Longest Prefix Suffix length:: " << longestPrefixSuffix(s);
//     return 0;
// }



// *************************** Another way *********************

#include<iostream>
using namespace std;

int longestPrefixSuffix(string s){
    int n=s.length();
    int ans=0;
    for(int i=1;i<n;i++){
        string prefix=s.substr(0,i);
        string suffix=s.substr(n-i,i);
        if(prefix==suffix){
            ans=i;
        }
    }
    return ans;
}

int main()
{
    string s;
    cout << "Enter the string:: ";
    cin >> s;

    cout << "Longest Prefix Suffix length:: " << longestPrefixSuffix(s);
return 0;
}