#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("clear");
    cout << "========================================" << endl << "System requirements" << endl << "========================================" << endl;
    cout << endl << "The system requirements of this program:" << endl;
    cout << "Wayland session enabled" << endl;
    cout << "Debian 13+ / Ubuntu 26.10+ with available apt" << endl;
    cout << endl;
    char input;
    cout << "Please make sure your current system is supported. To continue, enter y. To cancel the installation, press Ctrl+C: ";
    cin >> input;
    if(input == 'y')
    {
        system("clear");
        cout << "========================================" << endl << "Step 1/3 - Install Waydroid" << endl << "========================================" << endl;
        cout << endl << "You may need to enter your password to install Waydroid." << endl;
        char output = system("sudo apt install -y waydroid");
        system("clear");
     }
     else
     {
        cout << endl << "Incorrect input! Please run this program again." << endl;
        return 0;
    }
    cout << "========================================" << endl << "Step 2/3 - Install Android 17" << endl << "========================================" << endl << endl;
    system("sudo waydroid init -f -c https://waydroid-atv.github.io/ota/a17-qpr0/system -v https://waydroid-atv.github.io/ota/a17-qpr0/vendor -r lineage -s GAPPS");
    system("clear");
    cout << "========================================" << endl << "Step 3/3 - Run Android 17" << endl << "========================================" << endl << endl;
    system("waydroid show-full-ui");
    cout << endl << "Installed Waydroid and Android 17 successfully!";
    system("sleep 10");
    system("clear");
    return 0;
}
