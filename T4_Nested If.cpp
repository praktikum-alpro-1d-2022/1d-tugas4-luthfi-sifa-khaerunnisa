#include <iostream>

using namespace std;

int main()
{
    string username, password;

    cout << "Masukkan username : " ;
    cin >> username;
    cout << "Masukkan password : " ;
    cin >> password;

    if (username == "chips.ahoy" && password == "54321")
        cout << "Username dan password sesuai, Login berhasil !" ;
        else if (username == "chips.ahoy" && password != "54321")
        cout << "Username sesuai, password tidak sesuai !" ;
        else if  (username != "chips.ahoy" && password == "54321")
        cout << "Username tidak sesuai, password sesuai !" ;
        else
        cout << "Username dan password tidak sesuai !" ;


    return 0;
}
