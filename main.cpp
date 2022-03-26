#include <iostream>
using namespace std;
int main() {
cout << "the rule of game \n 1- each player has to choice number from 1 to 10 \n"
        "2- the player who reaches 100 first is the winner \n";

int sum = 0  , player1  , player2;
while(true)
{
// player1 input a number
cout << "\n player1 enter a number from 1 to 10 \n";
cin >> player1;
//this while loop for check if the player 1 enter a valid number or not .
while (player1 > 10)
{
    cout <<"please enter a valid number:\n ";
    cin >> player1;
}
// the number chosen by the player1 will be collected in the sum .
sum += player1;
cout << "sum =" << sum << endl;
// check if the player1 is winner or not
if (sum >= 100)
{
    cout << " player1 is winner" << endl;
    break;
}
//player2 enter a  number
cout << "player2 enter a number from 1 to 10 \n";
cin >> player2;

//this while loop for check if the player2 enter a valid number or not .
while ( player2 > 10 )
{
    cout << "please enter a valid number: \n";
    cin >> player2;
}
// the number chosen by the player2 will be collected in the sum .
sum += player2;
cout << "sum =" << sum << endl;
// check if the player2 is winner or not
if ( sum >= 100)
{
    cout << "player2 is winner " <<endl;
    break;
}
}
return 0;
}
