#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "========================================" << endl << "Uninstall Waydroid" << endl << "========================================" << endl;
    cout << endl << "Are you sure you want to uninstall Waydroid? (y/n): ";
    string input;
    cin >> input;
    if(input == "y")
    {
        system("clear");
     }
     else
     {
        return 0;
    }
    cout << "========================================" << endl << "Sudo verification" << endl << "========================================" << endl;
    cout << endl << "Please enter your sudo password: " << endl;
    char output = system("sudo echo Please wait...");
    cout << output;
    system("clear");
    cout << "========================================" << endl << "Step 1/2 - Uninstall Waydroid" << endl << "========================================" << endl;
    cout << endl << "Uninstalling Waydroid..." << endl << endl;
    system("sudo apt remove waydroid");
    system("clear");
    cout << "========================================" << endl << "Step 2/2 - Delete additional files" << endl << "========================================" << endl;
    cout << endl << "Please wait..." << endl << endl;
    system("sleep 3");
    system("sudo rm -rf /var/lib/waydroid /home/.waydroid ~/waydroid ~/.share/waydroid ~/.local/share/applications/*aydroid* ~/.local/share/waydroid");
    system("clear");
    cout << "Uninstalled Waydroid successfully!" << endl << endl;
    return 0;
}
