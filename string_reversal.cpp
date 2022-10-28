#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter a string : ";
    string str;
    cin >> str;
    // We create an empty stack
    stack<int> s;

    // Then we Push each character in the string to the stack
    for (char ch : str)
    {
        s.push(ch);
    }

    // Then we pop all characters from the stack(since based on LIFO, so we will get reversed string) and then put them back to the input string
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = s.top();
        s.pop();
    }

    cout <<"Reversed String : "<< str; // We then print our string which is now reversed

    return 0;
}