#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int uInputInt;
char uInputChar;

//installs scanallpro
string scanAllPro(){
    cout<<"Scan All Pro Installed"<<endl;
}

//selects printer driver
string scannerSelection(){
    printf("Please select the Scanner Below\n");
    printf("Fujitsu:\n");
    printf("1: 7160\n");
    printf("2: 5120C\n");
    printf("3: 6120\n");
    printf("4: 6120z\n");

    cin >> uInputInt;
    switch(uInputInt){
    case 1:
        cout<< "7160 installed" << endl;
        break;

    case 2:
        cout<< "5120C" << endl;
        break;

    case 3:
        cout<< "6120" << endl;
        break;

    case 4:
        cout<< "6120z installed" << endl;
        break;
    default:
        cout<< "error, try again" << endl;
    }
    printf("Have you installed Scan All Pro? y/n \n");
    cin >> uInputChar;
    if(uInputChar == 'y' || uInputChar == 'Y'){
        printf("WTR is completed.... Exiting Program.");
    } else if(uInputChar == 'n' || uInputChar == 'N'){
        scanAllPro();
    } else {printf("error, try again.");
    }
}



int main()
{
    //user instructions
    printf("WTR Tool Kit v1.0\n");
    printf(" \n");
    printf("This toolkit will install drivers used for WTR installation\n");
    printf("Please follow Instructions Carefully....");
    printf(" \n");
    printf(" \n");

    printf("Has Scanner been installed?\n");
    cin >> uInputChar;

    if(uInputChar == 'y' || uInputChar == 'Y'){
        printf("Have you installed scanallpro? y/n");
        cin >> uInputChar;
        if(uInputChar == 'n' || uInputChar == 'N'){
            scanAllPro();
            return 0;
        } else if(uInputChar == 'y' || uInputChar == 'Y'){
            printf("You are done!");
        }

    } else if (uInputChar == 'n' || uInputChar == 'N'){
        scannerSelection();
    } else{
        printf("error");
        return 0;
    }




    return 0;
}
