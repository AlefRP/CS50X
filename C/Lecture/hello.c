# include <cs50.h>
# include <stdio.h>

// I need to tell C the type of answer
// get_string comes from cs50 library
int main(void)
{
    printf("hello, world!\n");
    string answer = get_string("What is your name? ");
    printf("Hello, %s\n", answer);
}


// int main(void)
// {
//     string answer = get_string("What is your name? ");
//     printf("Hello, %s!\n", answer);
//     printf("Hello, hello!\n");
//     string first = get_string("What is your first name? ");
//     string last = get_string("What is your last name? ");
//     printf("Hello, %s %s\n", first, last);
//     printf("I got 100%%\n");
// }