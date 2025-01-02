#include<iostream>
using namespace std;
int main() {
    int mainMenuChoice, subMenuChoice;

    cout<<"Game Menu:"<<endl;
    cout<<"1. Start Game"<<endl;
    cout<<"2. Settings"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Enter your choice (1-3): ";
    cin>>mainMenuChoice;

    switch(mainMenuChoice) {
        case 1:
            cout<<"Start Game Menu:"<<endl;
            cout<<"1. New Game"<<endl;
            cout<<"2. Load Game"<<endl;
            cout<<"3. Multiplayer"<<endl;
            cout<<"Enter your choice: ";
            cin>>subMenuChoice;

            switch(subMenuChoice) {
                case 1:
                    cout<<"Starting a new game"<<endl;
                    break;
                case 2:
                    cout<<"Loading your saved game"<<endl;
                    break;
                case 3:
                    cout<<"Setting up multiplayer mode"<<endl;
                    break;
                default:
                    cout<<"Invalid choice in Start Game menu"<<endl;
                    break;
            }
            break;

        case 2:
            cout<<"Settings Menu:"<<endl;
            cout<<"1. Audio Settings"<<endl;
            cout<<"2. Video Settings"<<endl;
            cout<<"3. Controls"<<endl;
            cout<<"Enter your choice: ";
            cin>>subMenuChoice;

            switch(subMenuChoice) {
                case 1:
                    cout<<"Adjusting audio settings"<<endl;
                    break;
                case 2:
                    cout<<"Adjusting video settings"<<endl;
                    break;
                case 3:
                    cout<<"Configuring controls"<<endl;
                    break;
                default:
                    cout<<"Invalid choice in Settings menu"<<endl;
                    break;
            }
            break;

        case 3:
            cout<<"Exiting the game. Goodbye!"<<endl;
            break;

        default:
            cout<<"Invalid main menu choice"<<endl;
            break;
    }


}

