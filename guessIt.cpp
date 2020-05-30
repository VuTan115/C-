#include<bits/stdc++.h>
#include<time.h>
using namespace std;

    //  int generateNumber(){
    //      return rand()%100+1;
    //  }
    int generateRandomNumber()
    {
    return rand() % 100 + 1;
    }
        // int getPlayerGuess(){
        //     int num;
        //     cout<<" Enter your number that you wanna guess: ";
        //     cin>>num;
        //     return num;
        // }
     int getPlayerGuess()
    {
    int number;
    cout << endl << "Enter your number between 1 and 100: ";
    cin >> number;
    return number;
    }
    //  void printAnswer(int number,int randomNumber){
    //      do{
		
        
    //     if(number<randomNumber){
    //         cout<< " Your Number is smaller than the answer ";
    //     }
    //     else if(number >randomNumber){
    //         cout<< "Your Number is bigger than the answer";
    //     }
    //     else cout<<"You Win!!!";
	// 	}
    //     while(randomNumber!=number);
    //  }
    void printAnswer(int number, int randomNumber)
    {
    if (number > randomNumber) {
    cout << "Your number is too big." << endl;
    } else if (number < randomNumber) {
    cout << "Your number is too small." << endl;
    } else {
    cout << "Congratulation! You win." << endl;
    }
    }

    int main(){
		srand(time(0));
        int randomNumber = generateRandomNumber();
        int number;
        
    	do{
            srand(time(0));
            number = getPlayerGuess();
            printAnswer(number, randomNumber);
        }
       while (number != randomNumber);
         

        return 0;
    }
