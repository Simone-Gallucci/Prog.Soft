#include <iostream>
#include <string>

using namespace std;

int main() {
    // Credenziali preesistenti
    string username_corretto = "Szymon";
    string password_corretta = "Szymon05";
    string role = "admin";
    
    string username, password;
    
    cout << "=== LOGIN ===" << endl;
    
    {
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;
    
    
    
    if (username == username_corretto && password == password_corretta) {
        // Cancella lo schermo
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
        
        cout << "\n=== INFORMAZIONI UTENTE ===" << endl;
        cout << "Username: " << username << endl;
        cout << "Ruolo: " << role << endl;
        cout << "Accesso effettuato con successo!" << endl;
    } else {
        cout << "\nCredenziali errate!" << endl;
    }
    
    return 0;
}