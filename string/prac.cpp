#include <iostream>
#include<string>
using namespace std;

int main()
{
    // string s="Asish kumar Bera";
    // // cin>>s;
    // cout<<s;

    // string str;
    // getline(cin,str);
    // cout<<str;

    // string str = "Asish kumar";

    // str.push_back('!');
    // cout<<str<<endl;

    // str.pop_back();
    // cout<<str<<endl;

    // str.insert(5," c++");
    // cout<<str<<endl;

    // str.erase(5,4);
    // cout<<str<<endl;


    // reverse string
    // string str;
    // cout<<"Enter the string:: ";
    // getline(cin,str);

    // cout<<"Print the reverse:: ";
    // for(int i=str.size();i>=0;i--){
    //     cout<<str[i]<<" ";
    // }

    // int s=0,e=str.size()-1;
    // while(s<e){
    //     swap(str[s],str[e]);
    //     s++;
    //     e--;
    // }
    // for(int i=0;i<str.size();i++){
    //     cout<<str[i]<<" ";
    // }

    // calculate a string length
    string str;
    cout<<"enter the string:: ";
    getline(cin,str);

    int size=0;
    while(str[size] !='\0'){
        size++;
    }
    cout<<"Size of the string is:: "<<size;
    return 0;
}