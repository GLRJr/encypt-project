
#include <stdio.h>
#include <iostream> 
#include <cstdlib>   
#include <cstring>   
#include <string>

using namespace std;




int main (){



    string plainText;
    char message[plainText.size() + 1];
    char encrypt[10];
    int i;
    int j;
    int k = 3;
    
    char  codebook [] = { 'Z','z','Y','y','X','x','W','w','V','v','U','u','T','t',
                        'S','s','R','r','Q','q','P','p','O','o','N','n','M','m','L','l','K','k','J',
                        'j','I','i','H','h','G','g','F','f','E','e','D','d','C','c','B','b','A','a',
                        '9','8','7','6','5','4','3','2','1','0','#','!','\0'};



    cout << "Enter a word to be encrypted \n";
    cin >> plainText;
    
    strcpy(message, plainText.c_str());
   
   for (i = 0; message[i] != '\0'; i++) {
        

        for (j=0; j<= 65; j++){
            if (message[i] == codebook[j])
            {
                // cout << "ok" << "\n";
                 encrypt[i] = codebook[j+k];
            }
        }
    cout << encrypt[i];    
   }

   cout << "\n";


    // cout << encrypt[0] << encrypt[1] << encrypt[2] << encrypt[3] << encrypt[4];


    return 0;
}
