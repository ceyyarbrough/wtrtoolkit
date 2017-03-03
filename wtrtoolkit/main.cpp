#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int uInputInt;
char uInputChar;


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
        return "Install 1";
        break;

    case 2:
        return "Install 2";
        break;

    case 3:
        return "Install 3";
        break;

    case 4:
        return "Install 4";

    }
}

//test
string scanAllPro(){
    return "scanAllProInstall";
}

int main()
{
    printf("Has Scanner been installed?");
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
