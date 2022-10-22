#include<iostream>
#include<cstdlib>
#include <string>
using namespace std;

// player struct stores all their objects and name
struct Player
{
    string name;
    bool hasMasterKey;
    bool hasInfinityGauntlet;
    bool hasTheMegaChair;
    bool hasSwag;

};

int items = 0;
int currentRoom = 1;
int gameOn = 1;
void printMenu(int room);
Player createCharacter();
void searchRoom(int room);
void switchRoom(int room);
void map(int room);
void roomOne();
void roomTwo();
void roomThree();
void roomFour();
void roomFive();
// makes a charecter, p1
Player p1 = createCharacter();
//main function
int main(){
    //Player p1 = createCharacter();
    cout << "> Welcome to 'Escape Dungeon' \n > You awake in a scary room...\n > You hear a voice call out and tell you that if you \n > Go forth and find all 4 magic items, then I will release you back to your family....\n";
    while(gameOn == 1){
        // this switches between different rooms
        switch (currentRoom)
        {
        case 1:
            roomOne();
            break;
        case 2:
            roomTwo();
            break;
        case 3:
            roomThree();
            break;
        case 4:
            roomFour();
            break;
        default:
            break;
        }
    }
}
// the player create function
Player createCharacter(){
    Player p1;
    p1.hasMasterKey = false;
    p1.hasInfinityGauntlet = false;
    p1.hasTheMegaChair = false;
    p1.hasSwag = false;
    cout << "enter your name: ";
    cin >> p1.name;
    cout << "Hello " << p1.name << "\n";
    return p1;
}


// this function prints the player the possible options they have 
void printMenu(int room){

    
    // display options of stuff to do in room, move rooms
    cout << "\n|~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "| (1) Search This Room |\n";
    cout << "| (2) View Your Map    |\n";
    cout << "| (3) Next Room        |\n";
    cout << "| (0) Exit game        |\n";
    cout << "|~~~~~~~~~~~~~~~~~~~~~~|\n \n";
    cout << ">> ";
        int selectVar;
        cin >> selectVar;
        switch (selectVar)
        {
    //search room
        case 1:
            searchRoom(room);
            break;
    //map
        case 2:
            map(currentRoom);
            break;
    //switch room
        case 3:
            switchRoom(currentRoom);
            break;
    // exit the program
        case 0:
            _Exit(EXIT_FAILURE);
            break;
        }
    }
// this function searches the room the player is in and gives them a diffferent item depending on which room theyre in
void searchRoom(int rmNum){
    switch (rmNum)
    {
    case 1:
        if(p1.hasMasterKey != true){
            p1.hasMasterKey = true;
            cout << "you have found the master key\n";
            items++;
        }else{
            cout << "Nothing left to find here\n";
            }
        
        break;
    case 2:
        if(p1.hasInfinityGauntlet != true){
            p1.hasInfinityGauntlet = true;
            cout << "you have found thanos' infinity gauntlet, dope!\n";
            items++;

        }else{
            cout << "Nothing left to find here\n";
            }
        
        break;
    case 3:
        if(p1.hasTheMegaChair != true){
            p1.hasTheMegaChair = true;
            cout << "you have found the MEGA CHAIR, HELL YEAHHHHHHHHHHHHHHHHHHHHHH!!!!!\n";
            items++;
        }else{
            cout << "Nothing left to find here\n";
            }

        break;
    case 4:
        if(p1.hasSwag != true){
            p1.hasSwag = true;
            cout << "you have found the Swag! Nice!\n";
            items++;
        }else{
            cout << "Nothing left to find here\n";
            }
        break;
    default:
        break;
    } 
}

// this function handles switching rooms, it makes sure the player can travel to said room and handles moving them
void switchRoom(int room){
    if(room == 1){
        int roomSwitcher;
        int validRoomOption = room + 1;
        cout << "\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
        cout << "| You are in room: " << room << "        |\n";
        cout << "| You can go to room: " << validRoomOption << "     |\n";
        cout << "|    (1) Go to room " << validRoomOption <<"       |\n";
        cout << "|    (2) Stay in this room  |\n";
        cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n \n";
        cout << ">> ";

        cin >> roomSwitcher;
        switch (roomSwitcher)
        {
        case 1:
            currentRoom = validRoomOption;
            break;
        case 2:
            break;
        }
    }else{
        int roomSwitcher;
        int validRoomOption0 = room - 1;
        int validRoomOption1 = room + 1;
        cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
        cout << "| You are in room " << room << "          |\n";
        cout << "|    (1) Go to room " << validRoomOption0 <<"        |\n";
        cout << "|    (2) Go to room " << validRoomOption1 <<"        |\n";
        cout << "|    (3) Stay in this room   |\n";
        cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
        cout << ">> ";
        cin >> roomSwitcher;
        switch (roomSwitcher)
        {
        case 1:
            currentRoom = validRoomOption0;
            break;
        case 2:
            currentRoom = validRoomOption1;
        case 3:
            break;
        }

    }

}

// this function displays a map for each room the player is in
void map(int roomNum){
    switch (roomNum)
    {
    case 1:
        cout << "              4 \n";
        cout << "              | \n";
        cout << " 1-----2------3 \n";
        cout << " ^                \n";
        break;
    case 2:
        cout << "              4 \n";
        cout << "              | \n";
        cout << " 1-----2------3 \n";
        cout << "       ^          \n";
        break;
    case 3:
        cout << "              4 \n";
        cout << "              | \n";
        cout << " 1-----2------3 \n";
        cout << "              ^   \n";
        break;
    case 4: 
        cout << "            > 4 \n";
        cout << "              | \n";
        cout << " 1-----2------3 \n";

    }

}
//------------room functions-----
void roomOne(){
    printMenu(currentRoom);
}
void roomTwo(){
    printMenu(currentRoom);
}
void roomThree(){
    printMenu(currentRoom);
}
void roomFour(){
    printMenu(currentRoom);
}
