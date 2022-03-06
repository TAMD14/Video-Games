#include <iostream>
#include <ctime>

// Story Intro
void PrintIntroduction(int Difficulty)
{
std::cout   <<  "\nIn the year 2022, Russia Invades Ukraine...\n\n";
std::cout   <<  "After economic sanctions and a costly war in just a few weeks, the situation has turned dire for Russian Leadership.\n\n"; 
std::cout   <<  "The US receives intel that Vladamir Putin and his leadership have finalized a plan of action...a nuclear apocalypse.\n\n";
std::cout   <<  "'Why do we need a world if russia is not in it?' -Anonymous Russian Oligarch\n\n";
std::cout   <<  "You are a Black Ops CIA Agent that has successfully entered in to the Kremlin, you are at level "    <<  Difficulty;
std::cout   << std::endl;
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    //  Action Sequence
    std::cout   <<  "\nYou have 1 hour to neutralize Vladimir Putin...\n\n"; 

    //  Declare 3 number code
    const   int CodeA = rand() % Difficulty + Difficulty;
    const   int CodeB = rand() % Difficulty + Difficulty;
    const   int CodeC = rand() % Difficulty + Difficulty;

    const   int CodeSum = CodeA + CodeB + CodeC;
    const   int CodeMul = CodeA * CodeB * CodeC;
    
    //  Print sum and product to the terminal
    std::cout   << std::endl;
    std::cout   <<  "+ There are 3 numbers in the code";
    std::cout   <<  "\n+ The codes add up to: "    <<    CodeSum;
    std::cout   <<  "\n+ The codes multiply to: "    <<  CodeMul << std::endl;

    //  Declare 3 number code
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA  >> GuessB   >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessMul = GuessA * GuessB * GuessC;

        //  Check if the Players guess is correct
        if  (GuessSum == CodeSum &&  GuessMul == CodeMul)
        {    
            std::cout   <<  "\nIt worked!\n";
                return true;
        }
        else
        {    
                std::cout   <<  "\nYou've been escorted to the Gulag";
                    return false;
        }
}

int main()

{

srand(time(NULL)); // Create new random sequence based on time of day

    int LevelDifficulty = 1;
    int const MaxDifficulty = 3;
    
    while   (LevelDifficulty <= MaxDifficulty) // Loop game until complete

    {
        bool BLevelComplete = PlayGame(LevelDifficulty); ;
        
        std::cin.clear();// Clears any errors
        std::cin.ignore();// Discards the buffer
        
        if  (BLevelComplete) 

        {
            ++LevelDifficulty;
        }

    }

    std::cout   <<  "\nYou have successfully given Vladamir Putin a dose of his own medicine...poison";

    return 0;
}