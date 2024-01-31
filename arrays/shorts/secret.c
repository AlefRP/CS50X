#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool check_phrase(string phrase);

int main(void)
{
    string phrase = get_string("Phrase: ");
    if (check_phrase(phrase))
    {
        printf("Access Granted\n");
    }
    else
    {
        printf("Access Denied\n");
    }
}

bool check_phrase(string phrase)
{
    string password = "hello";

    // I can't compare two string in c using  ==, so i need to use strcommp
    if (strcommp(phrase, password) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}