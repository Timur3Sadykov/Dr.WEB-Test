#include <iostream>

void TrimRight(char* s)
{
    if (s)
    {
        char* end = s;

        for (; *s != '\0'; ++s)
        {
            if (*s != ' ')
            {
                end = s + 1;
            }
        }

        *end = '\0';
    }
}

int main()
{
    char s[] = "     Hello,    World                                                ";
    TrimRight(s);
    std::cout << "[" << s << "]";
}