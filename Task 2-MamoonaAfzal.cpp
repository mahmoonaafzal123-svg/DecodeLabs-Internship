#include <iostream>
#include <string>
using namespace std;

string encrypt(string text, int key)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
            text[i] = ((text[i] - 'A' + key) % 26) + 'A';

        else if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = ((text[i] - 'a' + key) % 26) + 'a';
    }
    return text;
}

string decrypt(string text, int key)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
            text[i] = ((text[i] - 'A' - key + 26) % 26) + 'A';

        else if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = ((text[i] - 'a' - key + 26) % 26) + 'a';
    }
    return text;
}

int main()
{
    string message, encrypted, decrypted;
    int key;

    cout << "=========================================\n";
    cout << "        CYBER SECURITY PROJECT\n";
    cout << "    BASIC ENCRYPTION & DECRYPTION\n";
    cout << "=========================================\n\n";

    cout << "Enter Your Message : ";
    getline(cin, message);
    cout << "Enter Security Key (1-25) : ";
    cin >> key;
    encrypted = encrypt(message, key);

    cout << "\nEncrypted Message : " << encrypted << endl;

    decrypted = decrypt(encrypted, key);

    cout << "Decrypted Message : " << decrypted << endl;

    cout << "\n=========================================\n";
    cout << "        PROJECT COMPLETED\n";
    cout << "=========================================\n";

    return 0;
}
