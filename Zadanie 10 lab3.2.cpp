#include <iostream>
#include <string>
#include<locale.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "polish");

    string consonants = "Lorem Ipsum to po prostu fikcyjny tekst branży poligraficznej i składu tekst", vowels = "Wbrew powszechnemu przekonaniu Lorem Ipsum nie jest po prostu przypadkowym tekstem", text;
    int wspol = 0, samo = 0, j;

    cout << "Podaj swój teskt: ";
    getline(cin, text);
    for (int i = 0; i < text.length(); i++) 
    {
        for (j = 0; j < consonants.length(); j++)
        {
            if (text[i] == consonants[j])
            {
                wspol++;
            }
        }
        for (j = 0; j < vowels.length(); j++)
        {
            if (text[i] == vowels[j]) 
            {
                samo++;
            }
        }
    }
    cout << "Liczba spółgłosek: " << wspol << endl;
    cout << "Liczba samogłosek: " << samo << endl;

    return 0;
}