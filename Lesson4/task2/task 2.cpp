#include <iostream>

using namespace std;

int main()
{
    char line1[100];
    char line2[100];
    bool ravnie = true;

    cout << "Vvedite stroky1: ";
    cin.getline(line1,100);

    cout << "Vvedite stroky2: ";
    cin.getline(line2,100);


    for(int i =0; line1[i] > 0 || line2[i] > 0;i++){
        if(line1[i] != line2[i]){
            ravnie = false;
        }
    }
    if(ravnie == 1){
        cout << "Stroki ravnie!";
    }
    else{
        cout << "Oshibka.Stroki raznie!"<<endl;
    }

}
