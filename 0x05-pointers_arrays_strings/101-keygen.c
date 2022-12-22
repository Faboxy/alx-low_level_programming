#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8
/**
* main - generate password
* Return: nothing
*/

int main(void)
{
srand(time(0));

char password[PASSWORD_LENGTH + 1];

for (int i = 0; i < PASSWORD_LENGTH; i++)
password[i] = rand() % ('z' - 'a' + 1) + 'a';
if (rand() % 2 == 0)
{
password[i] = rand() % 10 + '0';
}
}
password[PASSWORD_LENGTH] = '\0';

printf("Generated password: %s\n", password);
return 0;
}
