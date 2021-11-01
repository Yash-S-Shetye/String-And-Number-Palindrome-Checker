#include<iostream>
using namespace std;

void palindrome_number(int n)
{
    int reverse = 0;

    int temp = n;

    while(temp > 0)
    {
        reverse = reverse * 10 + temp % 10;
        temp = temp / 10;
    }

    if(reverse == n)
        cout<<"Entered number is palindrome\n";
    else
        cout<<"Entered number is not palindrome\n";
}

void palindrome_string(char* string)
{
    char *ptr, *rev;

    ptr = string;

    while(*ptr != '\0')
    {
        ++ptr;
    }

    --ptr;

    for(rev = string; ptr >= rev;)
    {
        if(*ptr == *rev)
        {
            --ptr;
            rev++;
        }
        else
            break;
    }

    if(rev > ptr)
        cout<<"Entered string is palindrome\n";
    else
        cout<<"Entered string is not palindrome\n";
}

int main()
{
    int x = 242;
    char name[20] = "abba";

    palindrome_number(x);
    palindrome_string(name);

    return 0;
}
