// Тут будет код
#include <stdio.h>

void greet(const char *name)
{
    if (name == NULL || name[0] == '\0')
        name = "world"; /* защита от пустого имени */
    printf("Hello, %s!\n", name);
}

int main(void)
{
    greet("Git");
    greet(NULL);
    return 0;
}
