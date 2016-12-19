#include <iostream>
using namespace std;


void deleteVowels (char *letters, char *result)
{
	int i = 0, j = 0;
	while (letters[i] != '\0')
	{
		if (letters[i] == 'b' || letters[i] == 'c' || letters[i] == 'd' || letters[i] == 'f' || letters[i] == 'g' || letters[i] == 'h' || 
		letters[i] == 'j' || letters[i] == 'k' || letters[i] == 'l' || letters[i] == 'm' || letters[i] == 'n' || letters[i] == 'p' || 
		letters[i] == 'q' || letters[i] == 'r' || letters[i] == 's' || letters[i] == 't' || letters[i] == 'v' || letters[i] == 'w' || 
		letters[i] == 'x' || letters[i] == 'z' || letters[i] == 'A' || letters[i] == 'E' || letters[i] == 'I' || letters[i] == 'O' || letters[i] == 'U'||
		 letters[i] == 'Y')
		{
			result[j] = letters[i];
			j++;
		}
		i++;	
	}
	result[j] = '\0';
}

int main ()

{
	char word[100];
	deleteVowels ("English alphabet", word);
	cout << word << endl;
	
	return 0;
}
