#include <iostream>
#include <vector>
using namespace std;

string sortSentence(string s)
{
    vector<string> ans(10);
    string temp;
    int count = 0, index = 0, pos;
    while (index < s.size())
    {
        if (s[index] == ' ')
        {
            pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            count++;
        }
        else
        {
            temp += s[index];
        }
        index++;
    }
    pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    temp.clear();
    count++;

    for(int i=1;i<=count;i++){
        temp+=ans[i];
        temp+=" ";
    }
    temp.pop_back();
    return temp;
}

int main()
{
    string s;
    cout<<"Enter a sentence:: "<<endl;
    getline(cin,s);

    string op=sortSentence(s);
    cout<<"Arranged sentence is::--->"<<endl<<op;

    return 0;
}