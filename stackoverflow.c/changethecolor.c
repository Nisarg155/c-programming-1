#include <stdio.h>

#define WHITE  "\x1b[0m"
#define RED    "\x1b[31m"
#define GREEN  "\x1b[32m"

int main()
{
    printf(GREEN "Some good text\n");
    printf(RED   "Some evil text\n");
    printf(WHITE "Some normal text\n");

    return 0;
}