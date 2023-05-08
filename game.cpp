#include<bits/stdc++.h>
using namespace std;
string name;
int money = 1000;

void data();
int random(){
    int i = rand()%11;
    if(i==0){
        random();
    }
    else{
        return i;
    }
}
void game(int bet_money, int m){

    // store random number
    int a  =random();


    //game
    if(a==m){
        cout<<"Congrats you Won this round, The number was: "<<m<<endl;
        money += bet_money*10;
        cout<<"Your have:- "<<money<<" in your account"<<endl;
    }
    else{
        cout<<"Oops, looks that's not the winning number"<<endl;
        cout<<"\nThe winning number was "<<a<<" and your was "<<m<<endl;
        cout<<"Better Luck Next Time!"<<endl;
        money -= bet_money;
        cout<<"\nYour have:- "<<money<<" in your account"<<endl;
    }

    //switch statement
    char c;
    cout<<"Do You Wanna Continue..."<<endl;
    cout<<"Y/N"<<endl;
    cin>>c;
    switch (c){
        case 'Y':
            data();
            break;
        case 'y':
            data();
            break;
        case 'N':
            return;
            break;
        case 'n':
            return;
            break;
        default:
            cout<<"Enter a valid Character"<<endl;
            break;
    }

}
void data(){
    int bet_money;
    int m;
    if(money==0){
        cout<<"Your funds have been spended try to recharge"<<endl;
        int x;
        cout<<"Enter money to buy credits";
        cin>>x;
        money = x;
    }
    cout<<name<<", Your cuurent account ballance is:- "<<money<<endl;
    cout<<"Enter the amount of money u wanna bet:- ";
    cin>>bet_money;
    if(bet_money>money){
        cout<<"You don't have this amount of money..."<<endl;
        data();
    }
    cout<<"\nGuess any number between 1 to 10 :- ";
    cin>>m;
    game(bet_money , m);
}
void rules(){
    cout<<"-----------------------------------------------\n"<<endl;
    cout<<"                Rules of the game\n"<<endl;
    cout<<"-----------------------------------------------\n"<<endl;
    cout<<"1. Chooose any number between 1 to 10"<<endl;
    cout<<"2. If you win, you will get 10 time the money you bet"<<endl;
    cout<<"2. If you loose, you will get nothing and will also loose the betting money"<<endl;
    cout<<"-----------------------------------------------\n\n\n"<<endl;
    data();
}
void user(){
    cout<<"Enter Your Name:- ";
    cin>>name;
    cout<<"\nHey, "<<name<<"! Your deposit is "<<money<<endl;
    rules();
}
void showcase(){
    cout<<"-----------------------------------------------\n"<<endl;
    cout<<"                    CASINO\n"<<endl;
    cout<<"-----------------------------------------------\n"<<endl;
    user();
}
int main(){
    showcase();
    return 0;
}