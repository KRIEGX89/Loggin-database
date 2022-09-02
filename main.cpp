/* Importing the libraries that are needed for the program to run. */
#include <iostream>
#include <string>
#include <cctype>
#include<ctype.h>

using namespace std;

/* Declaring the variables that are going to be used in the program. */
string n, s, c, u, p;
int a = 0;

/**
 * This function asks the user to input their name and returns it.
 * 
 * return the string y.
 */
string name(){
    string y;
    cout << "\nPlease Input your name" << endl;
    cin >> y;

    return y;
}

/**
 * This function asks the user to input their surname and returns it.
 * 
 * return The surname of the user.
 */
string surname(){
    string y;
    cout << "\nPlease Input your surname" << endl;
    cin >> y;
    
    return y;
}

/**
 * This function asks the user to input a code and returns the code.
 * 
 * return the string y.
 */
string code(){
    string y;
    cout << "\nPlease Input your code" << endl;
    cin >> y;

    return y;
}

/**
 * This function asks the user to input their username and returns it
 * 
 * return The user input is being returned.
 */
string user(){
    string y;
    cout << "\nPlease Input your user" << endl;
    cin >> y;

    return y;
}

/**
 * This function asks the user to input a password and returns the password.
 * 
 * return the string y.
 */
string password(){

    string y;
    cout << "\nPlease Input your password" << endl;
    cin >> y;

    return y;
}

/**
 * It's a menu that allows the user to input their name, surname, code, user and password.
 */
void menu(){
    while (a < 5){
        /* It's declaring the variable x and initializing it to 0. */
        int x = 0;

        cout << "\n************************************************************************************************" << endl;
        cout << "Press 1 for NAME.\nPress 2 for SURNAME.\nPress 3 for CODE.\nPress 4 for USER.\nPress 5 for PASSWORD.\n";
        cout << "************************************************************************************************" << endl;
        cin >> x;

        /* It's asking the user to input their name and then it's adding 1 to the variable a. */
        if (x ==1){
            n = name();
            a++;
        }

        /* It's asking the user to input their surname and then it's adding 1 to the variable a. */
        else if (x ==2){
            s = surname();
            a++;
        }

        /* It's asking the user to input a code and then it's checking if the code is valid. If the
        code is valid then it's adding 1 to the variable a. */
        else if (x == 3){
            int b = 0;
                for(int y = 0; y < 4; y++){
                    if(y == 3){
                        cout << "Failed to login... Exiting the program" << endl;
                        exit(0);
                    }
                    c = code();

                    for (int i = 0; i < c.length(); i++){
                        b++;
                    }

                    if (b == 8){
                        break;
                    }
                    cout << "\nPlease Input a VALID code";
                }
                
                a++;
        }

       /* It's asking the user to input their username and then it's adding 1 to the variable a. */
        else if (x == 4){
            u = user();
            a++;
        }

        /* It's asking the user to input a password and then it's checking if the password is valid. If
        the password is valid then it's adding 1 to the variable a. */
        else if (x == 5){
                bool up, lo, num = false;
                p = password();

                for (int i = 0; i < p.length(); i++){
                    if (isupper(p[i])){
                        up = true;
                    }

                    if (islower(p[i])){
                        lo = true;
                    }

                    if (isdigit(p[i])){
                        num = true;
                    }
                }

                for (int i = 0; i < 3; i++){
                    if (up == true and lo == true and num == true){
                        break;
                    }

                    if (i == 3){
                        cout << "Failed to login... Exiting the program" << endl;
                        exit(0);
                    }
                    cout << "The password MUST have an uppercase letter, a lowercase letter and a number" << endl;
                    p = password();
                }

                a++;
        }
    }
}

int main(){
    string d;
    menu();

    /* It's asking the user if they want to change a data. */
    cout << "\nDo you want to change a data? (y/n)" << endl;
    cin >> d;

    /* If the user wants to change a data then it's
    going to ask them to input the data that they want to change. */
    if (d == "y" or d == "Y"){
        while (true){
            a = 4;
            menu();
            cout << "Do you want to change something else? (y/n)" << endl;
            cin >> d;
            if (d == "y" or d == "Y"){
                continue;
            }
            else{
                break;
            }
        }
    }

    /* It's printing the name, surname, code, user and password of the user. */
    cout << "\n" << "Name: " << n << "\n" << "Surname: " << s << "\n" << "Code: " << c << "\n" << "User: " << u << "\n" << "Password: " << p << "\n";
}