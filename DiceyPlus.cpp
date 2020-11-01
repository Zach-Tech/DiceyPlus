// DiceyPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Dice rolling app/game
// Rolls D20, D6, D100
// Die under D6 do not roll very well
// Due small pool of bits, RNG enumarates repetive data.
// Standard C++ rand function
// does not perform as well as one
// might hope in the first place,
// die < D6 cannot be expected to perform to standard.
// ----
// Cleaned up and submitted to Web 6/23/2020
// Zach Childers

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
        //E5 
        //80        } - Colors I rotate in and out
        //FC
    
        
        
        system("color 80");
        int die = 0;
        char player[100];
        char reroll = 'y';
        int cclass;
        int classInput;
        cout << "\n\t\t\t\t****************************";
        cout << "\n\t\t\t\tChoose a name, Adventurer: ";
        cin.getline(player, sizeof(player));
        cout << "\n\t\t\t\t****************************";
        cout << "\n\t\t\t\tSelect your Dice!\n\t\t       D20 = [1]\n\t\t\tD6 = [2]\n\t\t      D100 = [3]\n\t\t\tYour Selection: ";
        cin >> die;
        cout << "\n\t\t\t\t****************************";
        cout << "\n\t\t\tSelect your Class:\n\t\tBard = [1]\n\t\tRogue = [2]\n\t\tWarlock = [3]\n\t\tEnd Program = [99]\n\t\t\tYour Selection: ";
        cin >> cclass;
   
    do
    {
        // Possible charClass -- offical, players handbook 
        // Bard
        // Rogue
        // Warlock
        // Barbarian
        // Cleric
        // Druid
        // Fighter
        // Monk
        // Paladin
        // Ranger
        // Sorceror
        // Wizard



        string characterClass[] = { " ",
        "Bard",
        "Rogue",
        "Warlock "};

        string adventure[] = { " ",
        "\n\t*The Bard took up their viola, and played beautiful music to the beast!\t   *\n\t*Only time will tell if the young bard makes it out in one piece!\t   *",
        "\n\t*Using their quick thinking and reflexes,\t\t\t\t   *\n\t*The Rogue began to dash around the cavern!\t\t\t\t   *\n\t*Let's hope the ground isn't slippery...\t\t\t\t   *",
        "\n\t*Preparing their eldritch powers\t\t\t\t\t   *\n\t*The Warlock looked for the best location to bring the 'house' down...\t   *"};

        system("cls");
        srand(time(NULL));
        int randNum = (rand() % 20) + 1;
        cout << "\n\t\t\t\t*************";
        cout << "\n\t\t\t\t*    D&D    *";
        cout << "\n\t\t\t\t*   Plus+   *";
        cout << "\n\t\t\t\t*************";

       
        //End-Program?
            if (cclass == 99)       //For this purpose
            {                       //Return 0 works best
                return 0;           //Actually ends program
            }                       //Without any additional functions                    
        //Bye-Bye!
            

        else
        {
            if (die == 1)
            {
                cout << "\n\t\t\t" 
                    << characterClass[cclass] 
                    << " " << player << " rolled a D20... \n\n\t\t\t\t...they got: " 
                    << randNum << "!" << endl << endl;
                if (randNum == 20)
                {
                    cout << "\n\t\t\t\tCritical Success!!!!\n";
                    cout << "\n\t\t\t\tThe Dragon Cowers!\n";
                    cout << "\n\n\tYour adventure!\n" <<
                        "\t****************************************************************************"
                        << adventure[cclass] 
                        << "\n\t*                With this roll... " << randNum <<"\t\t\t\t           *"
                        "\n\t*          ...I wonder what you'll do about the next one...                *" <<
                        "\n\t****************************************************************************"
                        << endl << endl;
                    break;

                }
                else
                {
                    if (randNum == 1)
                    {
                        cout << "\t\t\t\t*********************";
                        cout << "\n\t\t\t\t*                   *";
                        cout << "\n\t\t\t\t*Critical Failure!!!*";
                        cout << "\n\t\t\t\t*                   *";
                        cout << "\n\t\t\t\t*********************";
                        cout << "\n\t\t\t\t" << characterClass[cclass] 
                            <<  " " << player << " became a big ol' smore :3";
                    }
                }
            }
            else
            {
                int dsix = (rand() % 6) + 1;
                if (die == 2)
                {
                    cout << "\n\t\t\t" << characterClass[cclass] 
                        << " " << player << " rolled a D6... \n\n\t\t\t\t...they got: " 
                        << dsix << "!" << endl << endl;
                    if (dsix == 6)
                    {
                        cout << "\n\t\t\t\tCritical Success!!!!\n";
                        cout << "\n\t\t\t\t\The Dragon Cowers!!!\n";
                        cout << "\n\n\tYour adventure!\n" <<
                            "\t****************************************************************************" 
                            << adventure[cclass] 
                            << "\n\t*                With this roll... " << dsix << "\t\t\t\t           *"           
                            "\n\t*          ...I wonder what you'll do about the next one...                *" 
                            << 
                            "\n\t*\t\tHopefully better than Kaz...\t\t\t\t   *"<<
                            "\n\t*\t\t\t\tHe got stepped on.\t\t\t   *" <<
                            "\n\t****************************************************************************"
                            << endl << endl;
                        break;
                    }
                    else
                    {
                        if (dsix == 1)
                        {
                            cout << "\t\t\t\t*********************";
                            cout << "\n\t\t\t\t*                   *";
                            cout << "\n\t\t\t\t*Critical Failure!!!*";
                            cout << "\n\t\t\t\t*                   *";
                            cout << "\n\t\t\t\t*********************";
                            cout << "\n\t\t\t\tThe Dragon Feasts on " 
                                << characterClass[cclass] 
                                << " " << player << "...\n";
                        }

                    }

                }
                int dhun = (rand() % 100) + 1;
                if (die == 3)
                {
                    cout << "\n\t\t\t" 
                        << characterClass[cclass] 
                        << " " << player 
                        << " rolled a D100... \n\n\t\t\t\t...they got: " 
                        << dhun << "!" << endl << endl;
                    if (dhun == 100)
                    {
                        cout << "\n\t\t\t\tWow!!!\n\t\t\tCritical Success!!!!\n";
                        cout << "\n\t\t\t\tAbsolutely devastating!!!!\n";
                        cout << "\n\t\t\t\t\The Dragon is basically dust...\n";
                        cout << "\n\n\tYour adventure!\n"
                            <<
                            "\t****************************************************************************"
                            << adventure[cclass] << "\n\t*                With this roll... " << dhun<< "\t\t\t\t           *"
                            "\n\t*          ...I wonder what you'll do about the next one...                *"
                            <<"\n\t*\t\tBut I don't think you'll have any trouble...\t\t   *"<<
                            "\n\t****************************************************************************"
                            << endl << endl;
                        break;
                    }
                    else
                    {
                        if (dhun == 1)
                        {
                            cout << "\t\t\t\t*********************";
                            cout << "\n\t\t\t\t*                   *";
                            cout << "\n\t\t\t\t*Critical Failure!!!*";
                            cout << "\n\t\t\t\t*                   *";
                            cout << "\n\t\t\t\t*********************";
                            cout << "\n\t\t\tSorry, " 
                                << characterClass[cclass] 
                               <<  " " << player << 
                                " but the Dragon Stepped on You Ages Ago...\n";
                        }

                    }
                }

            }
        }
        cout << "\n\t\t\t\tRe-Roll? (Y/N): ";
        cin >> reroll;
    }while (reroll == 'y');

    //Have to redeclare a bunch of variables
    //Likely could have worked this out better



    // Here is where i've created a func
    // To rotate messages upon exit.
    // It would be very interesting
    // If i could get this to work
    // On my C# Discord bot,
    // Particularly for status messages.
    // Nontheless, I'm pleased with these results.
    // Wish I'd thought about it earlier in the semester.

    int rotate = (rand() % 6 + 1);
    string characterClass[] = { " ",
       "Bard",
       "Rogue",
       "Warlock" };

    if (rotate == 1)
    {

        cout << "\n\n\t\t\t\tThanks for playing, Dungeoneer!!!\n\t\t\t\tDon't forget your sword :P\n\t\t\t\tOr do... need a supply of swords so I can overprice them..." << endl << endl;
    }
    else
    {
        if (rotate == 2)
        {
            cout << "\n\n\t\t\t\tWowzer, " << player 
                << "\n\t\t\t\tYou must have some crazy luck there..." << endl << endl;
        }
        else
        {
            if (rotate == 3)
            {
                cout << "\n\n\t\t\t\tHope you enjoyed!!!\n\t\t\t\tI sure did..." << endl << endl;
            }
            else
            {
                if (rotate == 4)
                {
                    cout << "\n\n\t\t\t\tLook for chests on the way out!\n\t\t\t\tNot that we have treasure\n\t\t\t\tWe have a mimic problem...." << endl << endl;
                }
                else
                {
                    if (rotate == 5)
                    {
                        cout << "\n\n\t\t\t\tJust so you know, " 
                            << characterClass[cclass] 
                            << "\n\t\t\t\tWizards are way better..." << endl << endl;
                    }
                    else
                    {
                        if (rotate == 6)
                        {
                            cout << "\n\n\t\t\t\tThis program is dedicated to Mia Gottschalk,\n\t\t\t\tWho is (currently) my Fiance\n\t\t\t\tAnd the love of my Life." << endl << endl;
                        }
                    }
                      
     
                }
           

            }
            

        }
    }
    system("\n\t\t\t\tpause");
    return 0; 
}

// Thank you for taking the time to check this out.