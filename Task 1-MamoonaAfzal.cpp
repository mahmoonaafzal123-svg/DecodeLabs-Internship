#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool checkPassword(string password)
{
    bool upper = false, lower = false, digit = false, special = false;

    for(char ch : password)
    {
        if(isupper(ch))
            upper = true;
        else if(islower(ch))
            lower = true;
        else if(isdigit(ch))
            digit = true;
        else
            special = true;
    }

    return password.length() >= 8 && upper && lower && digit && special;
}

int main()
{
    string password;	

    cout << "=========================================\n";
    cout << "      CYBER SECURITY PASSWORD CHECKER\n";
    cout << "=========================================\n\n";

    cout << "Enter Your Password: ";
    getline(cin, password);
cout << "\n=========================================\n";
cout << "        PASSWORD SECURITY REPORT\n";
cout << "=========================================\n";

if(checkPassword(password))
{
    cout << "Overall Status  : STRONG PASSWORD\n";
    cout << "Validation      : SUCCESSFUL\n";
    cout << "Protection      : HIGH\n";
    cout << "Advice          : Excellent! Your password meets\n";
    cout << "                  the recommended security standards.\n";
}
else
{
    cout << "Overall Status  : WEAK PASSWORD\n";
    cout << "Validation      : FAILED\n";
    cout << "Protection      : LOW\n";
    cout << "Advice          : Improve your password by using:\n";
    cout << "                  - At least 8 characters\n";
    cout << "                  - Uppercase letter (A-Z)\n";
    cout << "                  - Lowercase letter (a-z)\n";
    cout << "                  - At least one digit (0-9)\n";
    cout << "                  - At least one special character (@,#,$,!, etc.)\n";
}

cout << "=========================================\n";
    
        
    

    return 0;
}
