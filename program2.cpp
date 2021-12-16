#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void afficherDateEtHeure(const string& f)
{
    if ( f.length() != 12 )
        cerr << "Chaine invalide." << endl;
    else
    {
        cout << "Date  : " << f.substr(0,2) << "/" << f.substr(2,2) << "/" << f.substr(4,4) << endl;
        cout << "Heure : " << f.substr(8,2) << "h" << f.substr(10,2) << endl;
    }
}

int main(int argc, char** argv)
{
    string f("010920091123");
    afficherDateEtHeure(f); // exemple
}



