#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	      char valid_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghi
		      jklmnopqrstuvwxyz0123456789";
	      char password[PASSWORD_LENGTH + 1]; // +1 for null terminator
	          int i;
		  srand(time(NULL)); // Seed random number generator with current time
		  for (i = 0; i < PASSWORD_LENGTH; i++) {
			  password[i] = valid_chars[rand() % strlen(valid_chars)];
		  }
		  password[PASSWORD_LENGTH] = '\0'; // Add null terminator to end of password string

		  _putchar ("%s\n", password);

		  return 0;
}
