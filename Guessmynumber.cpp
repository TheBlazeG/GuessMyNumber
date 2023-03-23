#include <iostream>
#include<cstdlib> //Trabaja con números random
using namespace std;
int guessf(string question, int a, int b=1);
int guess;
int main()
{

    srand(static_cast<unsigned int>(time(0)));
    //srand(time(NULL));
    int randomNumber = rand();
    int secretNumber = (randomNumber % 100) + 1;
    int tries = 0;


    cout << "GUESS MY NUMBER" << endl;
    cout << "Adivina el número en el menor número de intentos posible." << endl;

    //Depurar
    cout << secretNumber;
    do
    {


        guess=guessf("\nAdivina un numero",100);
        tries++;
        int VC = secretNumber - guess;
        if (VC >= -5 && VC <= 5 && VC != 0)
        {
            cout << "Estas muy cerca!\n";
        }
        if (guess > secretNumber) {
            cout << "Muy Alto\n\n";

        }
        else if (guess < secretNumber) {
            cout << "Muy Bajo\n\n";

        }
        else {
            cout << "Excelente lo hiciste en --" << tries << "-- intentos";

        }
    } while (guess != secretNumber);
}
int guessf(string question, int a, int b)
{
    int number=0;
    do
    {
        cout << question << "entre " << a << " y "<< b << endl;
        cin >> number;
    } while (number > a || number < b);
    return number;
}