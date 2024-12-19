#include <bits/stdc++.h>
using namespace std;

int check(string str){
    stringstream s(str);
    string word;
    int count=0;
    while(s>>word){
        count++;
    }
    return count;
}

int main()
{
    string s=R"(#include <bits/stdc++.h>
using namespace std;

int check(string str){
    stringstream s(str);
    string word;
    int count=0;
    while(s>>word){
        count++;
    }
    return count;
}

int main()
{
    string s="hello hello";
    cout<<check(s);
})";

    cout<<check(s);
}
