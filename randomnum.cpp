#include<iostream>
#include<ctime>
using namespace std;

int main(){
    
    srand(time(NULL));
    int randomNum = (rand() % 6) + 1; // Generates a random number between 1 and 6
    cout << "Random Number: " << randomNum << endl;
}
