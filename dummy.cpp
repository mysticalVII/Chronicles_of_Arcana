#include<iostream>
#include<windows.h>
#include<ctime>
#include<cstdlib> 


using namespace std;


int craft_potion(){
    int combo, selection;

    cout << "Enter the number combination(from 1, 2 and 3): ";
    cin >> combo;

    switch (combo)
    {
    case 123:
        cout << "You have made Healing Potion!" << endl;
        break;

    case 312:
        cout << "You have made Invisibility Elixir!" << endl;
        break;

    case 231:
        cout << "You have made Strength Brew!" << endl;
        break;
    default:
        break;
    }

    Sleep(3000);

    cout << "\nWhat you want to do with the potion?" << endl;
    cout << "\n1.Use \n2.Store \n3.Trash" << endl << ">> ";
    cin >> selection;

    if (selection == 1){
        cout << "The potion has been used!";
    }
    else if (selection == 2){
        cout << "The potion has been stored!";
    }
    else{
        cout << "The potion has been discarded!";
    }

    return 0;
}

int mini_battle(){
    srand(time(0));

    int player_HP = 100;
    int player_moves;

    int monster_HP = 100;
    int monster_moves;

    bool validAttack = false;

    //dialogue
    cout << "The Arcane Witch goes on her adventure in the tiny woods nearby her cottage.";
    Sleep(1000);
    cout << "\nSuddenly she encounters a goblin who is obstructing her way, she is left with no choice but to engage in the battle!";
    Sleep(3000);
    cout <<"\nThe battle beings!";
    Sleep(3000);
    

    //battle

    //player's attack
    while (monster_HP > 0 && player_HP > 0)

        while (monster_HP > 0) {
            cout << "\n________________________________________________" <<endl;
            cout << "\nYour turn \nAttacks: ";
            cout << "\n1. Arcane Blast \n2. Nature's Grasp \n3. Starfall \n4. Soul Drain \n" << ">>";
            cin >> player_moves;

            switch(player_moves){
            
                case 1:
                    validAttack = true;
                    cout << "\nPlayer used Arcane Blast!\n";
                    Sleep(2000);
                    monster_HP = monster_HP - 10;
                    cout << "Player's HP: " << player_HP << endl;
                    cout << "Monster's HP: " << monster_HP << endl;
                break;

                case 2:
                    validAttack = true;
                    cout << "\nPlayer used Nature's Grasp!\n";
                    Sleep(2000);
                    monster_HP = monster_HP - 15;
                    cout << "Player's HP: " << player_HP << endl;
                    cout << "Monster's HP: " << monster_HP << endl;
                break;

                case 3:
                    validAttack = true;
                    cout << "\nPlayer used Starfall!\n";
                    Sleep(2000);
                    monster_HP = monster_HP - 25;
                    cout << "Player's HP: " << player_HP << endl;
                    cout << "Monster's HP: " << monster_HP << endl;
                break;

                case 4:
                    validAttack = true;
                    cout << "\nPlayer used Soul Drain!\n";
                    Sleep(2000);
                    monster_HP = monster_HP - 30;
                    cout << "Player's HP: " << player_HP << endl;
                    cout << "Monster's HP: " << monster_HP << endl;
                break;
                
                default:
                    cout << "\nInvalid choice. Please choose a valid attack." << endl;
                    break;
            }//end of while loop

        //monster's turn (random attacks)

        if (player_HP > 0){
            monster_moves = rand() % 4 + 1; //Generates the random attacks for the monster
            /*
            Monster attack names:
                Rusty Shank Swipe
                Mud Sling
                Filthy Kick
                Rat Horde Summon
            */
            switch (monster_moves)
            {
            case 1:
                cout << "\nMonster used Rusty Shank Swipe!\n";
                    Sleep(2000);
                    player_HP = player_HP - 15;
                    cout << "Player's HP: " << player_HP << endl;
                    cout << "Monster's HP: " << monster_HP << endl;
                break;

            case 2:
                cout << "\nMonster used Mud Sling!\n";
                    Sleep(2000);
                    player_HP = player_HP - 25;
                    cout << "Player's HP: " << player_HP << endl;
                    cout << "Monster's HP: " << monster_HP << endl;
                break;

            case 3:
                cout << "\nMonster used Filthy Kick!\n";
                    Sleep(2000);
                    player_HP = player_HP - 35;
                    cout << "Player's HP: " << player_HP << endl;
                    cout << "Monster's HP: " << monster_HP << endl;
                break;

            case 4:
                cout << "\nMonster used Rat Horde Summon!\n";
                    Sleep(2000);
                    player_HP = player_HP - 40;
                break;
            
            default:
                break;
            }//end of switch monster attacks
        }//end of monster if
    }

    if (monster_HP <= 0) {
        cout << "\nThe monster has been defeated!" << endl;
    }
    
    else if (player_HP <= 0){
        cout << "\nThe Arcane Witch has been defeated!" << endl;
    }
    return 0;
}

int main(){

    char menu;
    cout << "Menu" << endl;
    cout << "1.Craft Potion \n2.Battle \n3.Exit" << "\n>>";
    cin >> menu;


    switch (menu){
       case '1':
            craft_potion();
            break;

        case '2':
            mini_battle();
            break;

        case '3':
            break;

        default:
            cout << "Invalid choice";
            break;
    }
    return 0;
}
