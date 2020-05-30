#include <bits/stdc++.h>
using namespace std;
// function that take random number 
    int getRandomNumber(){
        return rand()%(10-0+1)+1;// function return  a random number
    }
    // function that take player guess
    int playerGetGuess(){
        int number;
        cout<<"Enter Your Number That You Guess :";
        cin>>number;// take the number which player guess
        return number;// return the number which player guess
    }
    // function that printf the answer
    void printAnswer( int number,int randomNumber){

      if (number > randomNumber) {
        cout << "Your number is too big." << endl;//if the number which player guess is bigger than random number request player rewrite
        } else if (number < randomNumber) {
        cout << "Your number is too small." << endl;//if the number which player guess is smaller than random number request player rewrite
        } else {
        cout << "Congratulation! You win." << endl;// đoán đúng thì win thôi hết game.
    }
    };
	// main function:
    int main(){
        srand(time(0));
        int randomNumber=getRandomNumber();
        int number;
    	do{       
            
		number=playerGetGuess();
        printAnswer(number,randomNumber);
        }while(number!=randomNumber);
        return 0;
    }
