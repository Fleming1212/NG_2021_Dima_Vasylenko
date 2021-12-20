#include <iostream>

using namespace std;

int main()
{

    char words [100] = "";
    cin.getline(words, 100);
    for (int i = 0;words[i] != 0; i++)
    {
        while (words[i] == 'f' && words[i+1] == 'u' &&
            words[i+2] == 'c' && words[i+3] == 'k')
        {
                words[i] = '*';
                words[i+1] = '*';
                words[i+2] = '*';
                words[i+3] = '*';
        }
        cout << words[i];
    }
    return 0;
}
