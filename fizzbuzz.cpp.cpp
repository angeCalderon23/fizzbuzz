#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void fizzbuzz(); // función FizzBuzz

int main(){
    cout<<"Welcome to Fizzbuzz GAME.\n";
    cout<<"A group of children sit in a circle and count numbers out loud.\n";
    cout<<"The first child says one, the second child says two, and so on.\n";
    cout<<"However, if the number is divisible by 3, they say fizz instead of the number. If the number is divisible by 5, they say buzz, and if the number is divisible by 3 and 5, they say Fizzbuzz!.\n";
    cout<<"\n";

    int i;
    i = 1;

    while(i == 1){
        cout<<"A child yelled something!\n";
        fizzbuzz();
        string pregunta;
        cout<<"Will another child say a number? Answer YES or NO: ";//Hay mas niños que quieren participar?
        cin>>pregunta;

        if (pregunta == "NO"){i = 2;}else if(pregunta == "YES"){// sale del ciclo while
            i = 1;}else{cout<<"Wrong answer!\n";
            i = 2;
        }
        }

    system("pause");
    return 0;
}


//-------------------------------------------------------FUNCION--------------------------------------------------------------------------------------



void fizzbuzz(){
        string nino;
        cout<<"Enter the child's first name: ";
        cin>>nino;


        cout<<"What does the boy yell?\n";


        string duda;
        cout<<"Did the child say a number? - YES OR NO: ";
        cin>>duda;

        if(duda == "YES"){

         string gritonino;
         cout<<"What number did the child say? (Ex: 1) :";
         cin>>gritonino;
         int n = stoi(gritonino);

         if (n % 3 == 0 && n % 5 == 0) {
            cout<<nino<<" says "<<"Fizz buzz!"<<endl; // determina si es divisible por 3 y 5
         }

         else if (n % 3 == 0 ) {
            cout<<nino<<" said "<<"Fizz"<<endl;// determina si es divisible por 3
         }
         else if (n % 5 == 0 ) {
            cout<<nino<<" said "<<"Buzz"<<endl;// determina si es divisible por 5

         }else{
            cout<<"The child says "<<n<<endl;
         }

        }else if (duda == "NO"){
         string gritoninoP;
         cout<<"What word did the boy say then?:  ";
         cin>>gritoninoP;
            cout<<nino<<" says "<<gritoninoP<<"!"<<endl;// El niño no pudo decir un numero
        }else{
            cout<<"Wrong answer!!"<<endl;
        }


}




