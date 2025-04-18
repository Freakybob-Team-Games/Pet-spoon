// Heya!! If you want to play Spoon, you'll have to use an online website.
// You can use these 2 that I recommend!!
// https://www.onlinegdb.com/online_c++_compiler OR https://www.programiz.com/cpp-programming/online-compiler/
// Copy and paste this code into the terminal and press run!
// If there are any bugs you've found, either tell me if we're at the same school or make an issue on the github!
// **************************************************************************************************************
// If you want to use the actual file without using a website, you can read the README assigned to this Repo. If you find any bugs, make an issue please ^^
//************************************************************************************************************************************************
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>

//***important strings***
std::string spoonname;
int xp = 0;
int money = 777;
std::string username;

std::string toLower(std::string input) {
    std::string result = input;
    std::transform(result.begin(), result.end(), result.begin(), 
                   [](unsigned char c){ return std::tolower(c); });
    return result;
}

// the weird void stuff greg
void adoption();
void viewingarea();
void store_at_start();
void tutoriel();
void game();

int main() {
    std::string what;
    std::string ok;

    // this is spoon. cause spon is gref
    // too many warnings greg help
    std::cout << R"(
                                         
                                         
  ____  _____     ___     ___     ___    
 /',__\/\ '__`\  / __`\  / __`\ /' _ `\  
/\__, `\ \ \L\ \/\ \L\ \/\ \L\ \/\ \/\ \ 
\/\____/\ \ ,__/\ \____/\ \____/\ \_\ \_\
 \/___/  \ \ \/  \/___/  \/___/  \/_/\/_/
          \ \_\                          
           \/_/                          
)" << '\n';
    std::cout << "Made by 5quirre1 and Nomaakip\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Welcome to Spoon. Say 'Info' for what Spoon is about.\nSay anything else to continue on your adventure of taking care of a spoon rgeg\n";
    std::cin >> what;
    
    std::string whatLower = toLower(what);
    if (whatLower == "info") {
        std::cout << "-------------------------------------------------------";
        std::cout << "\nThis game is about taking care of a pet spoon. Don't ask why cause like, it's very useful lmao\nSome stuff that is going to be updated in later updates:\n\nA saving system\nRandom events when you like use the command 'Check' or something\nRandom cool stuff\nDo You want to know some bugs that have been found? (Say 'Bugs')\n";

        std::cin >> ok;
        std::string okLower = toLower(ok);
        if (okLower == "why") {
            std::cout << "I just said to not ask vro\n\n";
        }
        if (okLower == "skibidi") {
            std::cout << "Peak";
        }
        if (okLower == "bugs") {
            std::cout << "-------------------------------------------------------";
            std::cout << "\nIf You say anything else to the Buying of the Spoon part, it will completly skip that :sob:\nThat's all for now...\n";
        }
    }
    if (whatLower == "no") {
        std::cout << "Ok, geez";
    }
    
    adoption();
    viewingarea();
    store_at_start();
    tutoriel();
    game();
    
    return 0;
}

// All the voids greg (I put it down here cause greg)
void adoption() {
    std::cout << "\n-------------------------------------------------------\n";
    std::cout << "Dominic: Welcome to the spoon adoption place, I am the granpapa of all the\nspoons here, greg. Wait, You're not greg, what is your name, random person?\n";
    std::cout << "You: ";
    std::cin >> username;
    
    std::string usernameLower = toLower(username);
    if (usernameLower == "greg") {
        std::cout << "oh, so you are greg, mb\n";
    }
    
    std::cout << "Dominic: K, so " << username << ", let's take you over to the spoon viewing area so you can check out the pet spoons";
}

void viewingarea() {
    std::string buy;
    std::string useroption;
    std::string buy2;
    std::string buy3;
    
    std::cout << "\n\n Dominic: Welcome to the viewing area where you will find your pet spoon for life\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Dominic: There is only one pet spoon left. It's a She and is 7 months old\n";
    std::cout << "Dominic: Do you want to buy her? She's only $3\n\n";
    std::cout << "You have $800, y/n\n";
    std::cout << "You: ";
    std::cin >> buy;

    std::string buyLower = toLower(buy);
    if (buyLower == "y" || buyLower == "yes") {
        money -= 3;
        std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, you're gonna need some supplies so that you can take care of your spoon!\n\n";
        return;
    }
    
    if (buyLower == "n" || buyLower == "no") {
        std::cout << "So the thing about that is that you can't say no. You have 2 options. Buy the spoon or quit the game. (Buy or quit)\n\n";
        std::cout << "You: ";
        std::cin >> useroption;
        
        std::string useroptionLower = toLower(useroption);
        if (useroptionLower == "quit") {
            std::cout << "No one likes you.";
            exit(888888888);
        }
        
        if (useroptionLower == "buy") {
            std::cout << "Do you want to buy her? She's only $3\n\n";
            std::cout << "You have $800, y/n\n";
            std::cout << "You: ";
            std::cin >> buy2;
            
            std::string buy2Lower = toLower(buy2);
            if (buy2Lower == "y" || buy2Lower == "yes") {
                money -= 3;
                std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, you're gonna need some supplies so that you can take care of your spoon!\n\n";
                return;
            }
            
            if (buy2Lower == "n" || buy2Lower == "no") {
                std::cout << "Nope, try again.\n\n";
                std::cout << "Dominic: Do you want to buy her? She's only $3\n\n";
                std::cout << "You have $800, (y)\n";
                std::cout << "You: ";
                std::cin >> buy3;
                
                std::string buy3Lower = toLower(buy3);
                if (buy3Lower == "y" || buy3Lower == "yes") {
                    money -= 3;
                    std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, you're gonna need some supplies so that you can take care of your spoon!\n\n";
                }
            }
        }
    }
}

void store_at_start() {
    std::string foodbuy;
    std::string essentialsbuy;
    
    std::cout << "\n\nWelcome to the Spoon pet shop! This place will have everything you'll ever need to take care of your spoon! We also have a deal on so it's your lucky day!\n\n";
    std::cout << "We'll start off by buying some food for your pet spoon. Buy all of them by typing 'All'\n\n";
    std::cout << "School pizza      Bread       Watermelon\n";
    std::cout << "     $3            $1             $3            \n";
    std::cout << "You have $" << money << "\n";
    std::cout << "You: ";
    std::cin >> foodbuy;
    
    std::string foodbuyLower = toLower(foodbuy);
    if (foodbuyLower == "all") {
        std::cout << "You have bought school pizza, Bread, Watermelon!\n";
        money -= 7;
        std::cout << "You now have $" << money << " left!";
    } else {
        std::cout << "-------------------------------------------------------\n";
        std::cout << "I think you meant to say 'All' but that was too hard for you. Try again.\n";
        std::cout << "-------------------------------------------------------";
        std::cout << "\n\nWelcome to the Spoon pet shop! This place will have everything you'll ever need to take care of your spoon! We also have a deal on so it's your lucky day!\n\n";
        std::cout << "We'll start off by buying some food for your pet spoon. Buy all of them by typing 'All'\n\n";
        std::cout << "School pizza      Bread       Watermelon\n";
        std::cout << "     $3            $1             $3            \n";
        std::cout << "You have $" << money << "\n";
        std::cout << "You: ";
        std::cin >> foodbuy;
        
        foodbuyLower = toLower(foodbuy);
        if (foodbuyLower == "all") {
            std::cout << "You have bought school pizza, Bread, Watermelon!\n";
            money -= 7;
            std::cout << "You now have $" << money << " left!";
        }
    }
    
    std::cout << "\n-------------------------------------------------------";
    std::cout << "\n\nGreat! Now that you have food to feed your pet spoon, let's get some essentials that will make your life and your spoon's life easier!\n";
    std::cout << "I recommend buy all of these. Type 'All'.\n\n";
    std::cout << "Yummy oil  Dishwasher pods   Collar   Bed\n";
    std::cout << "   $3            $5            $3     $9\n\n";
    std::cout << "You have $" << money << "\n";
    std::cout << "You: ";
    std::cin >> essentialsbuy;

    std::string essentialsbuyLower = toLower(essentialsbuy);
    if (essentialsbuyLower == "all") {
        std::cout << "You have bought Yummy oil, Dishwasher pods, collar and a bed!\n";
        money -= 20;
        std::cout << "You now have $" << money << " left!\n";
    } else {
        std::cout << "-------------------------------------------------------\n";
        std::cout << "I think you meant to say 'All' but that was too hard for you. Try again.\n";
        std::cout << "-------------------------------------------------------";
        std::cout << "\n\nGreat! Now that you have food to feed your pet spoon, let's get some essentials that will make your life and your spoon's life easier!\n";
        std::cout << "I recommend buy all of these. Type 'All'.\n\n";
        std::cout << "Yummy oil  Dishwasher pods   Collar   Bed\n";
        std::cout << "   $3            $5            $3     $9\n\n";
        std::cout << "You have $" << money << "\n";
        std::cout << "You: ";
        std::cin >> essentialsbuy;
        
        essentialsbuyLower = toLower(essentialsbuy);
        if (essentialsbuyLower == "all") {
            std::cout << "You have bought Yummy oil, Dishwasher pods, collar and a bed!\n";
            money -= 20;
            std::cout << "You now have $" << money << " left!\n";
        }
    }
    
    std::cout << "-------------------------------------------------------";
    std::cout << "\nCongrats! You have everything you'll need for your pet spoon! The Store is always open for you to buy more supplies!\nI hope you enjoy your time as a new spoon owner!!";
}

void tutoriel() {
    std::string call_tot;
    std::string options;
    std::string food_options;
    std::string feed;
    std::string understand;

    std::cout << "\n-------------------------------------------------------";
    std::cout << "\nYou have brought your spoon home! While she explores the house, you need to give her a name!\nWhat should their name be?\n";
    std::cout << "You: ";
    std::cin >> spoonname;
    std::cout << "\nYour spoon has been named " << spoonname << "!\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout << spoonname << " walks around her new house.\n";
    
    // learning how to call your spoon regegege
    std::cout << "-------------------------------------------------------\n";
    std::cout << "You can call your spoon over by typing '" << spoonname << "'! Try it out!\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout << "You: ";
    std::cin >> call_tot;
    
    std::string call_totLower = toLower(call_tot);
    std::string spoonnameLower = toLower(spoonname);
    
    if (call_totLower == "skip") {
        std::cout << "Skipping tutoriel...";
        return;
    }
    
    if (call_totLower == spoonnameLower) {
        std::cout << spoonname << " walked over to you!\n";
        std::cout << "-------------------------------------------------------\n";
        std::cout << "Good job! Now that we know how to call our spoon, let's learn how to feed our spoon!\n";
    } else {
        std::cout << "-------------------------------------------------------\n";
        std::cout << "Remember, you have to call your spoon by typing '" << spoonname << "'\n";
        std::cout << "-------------------------------------------------------\n";
        std::cout << "You: ";
        std::cin >> call_tot;
        call_totLower = toLower(call_tot);
        
        if (call_totLower == spoonnameLower) {
            std::cout << spoonname << " walked over to you!\n";
        }
        std::cout << "Good job! Now that we know how to call our spoon, let's learn how to feed our spoon!\n";
        std::cout << "-------------------------------------------------------\n";
    }
    
    // learning how to feed
    std::cout << "-------------------------------------------------------\n";
    std::cout << "To give food to your spoon, you would call your spoon like normal but you would type 'Feed'! Try it out!\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout << "You: ";
    std::cin >> call_tot;
    call_totLower = toLower(call_tot);
    
    if (call_totLower == spoonnameLower) {
        std::cout << spoonname << " walks up to you!\n";
    } else {
        std::cout << "-------------------------------------------------------\n";
        std::cout << "Remember, you have to call your spoon by typing '" << spoonname << "' and then say 'Feed'!\n";
        std::cout << "-------------------------------------------------------\n";
        std::cout << "To give food to your spoon, you would call your spoon like normal but you would type 'Feed'! Try it out!\n";
        std::cout << "-------------------------------------------------------\n";
        std::cout << "You: ";
        std::cin >> call_tot;
        call_totLower = toLower(call_tot);
        
        if (call_totLower == spoonnameLower) {
            std::cout << spoonname << " walks up to you!\n";
        }
    }
    
    std::cout << "You: ";
    std::cin >> options;
    std::string optionsLower = toLower(options);
    
    if (optionsLower == "feed") {
        std::cout << "-------------------------------------------------------\n";
        std::cout << "Good job! Let's give our spoon some bread! Type 'Bread'\n";
        std::cout << "-------------------------------------------------------\n";
        std::cout << "School pizza      Bread       Watermelon\n";
        std::cout << "You: ";
        std::cin >> food_options;
        std::string food_optionsLower = toLower(food_options);
        
        if (food_optionsLower == "bread") {
            std::cout << "The Spoon ate the bread! She thought it was good!\n";
        }
    } else {
        std::cout << "-------------------------------------------------------\n";
        std::cout << "Make sure to Type 'Feed' (or 'feed' works too now!)\n";
        std::cout << "-------------------------------------------------------\n";
        std::cout << "You: ";
        std::cin >> options;
        optionsLower = toLower(options);
        
        if (optionsLower == "feed") {
            std::cout << "-------------------------------------------------------\n";
            std::cout << "Good job! Let's give our spoon some bread! Type 'Bread'\n";
            std::cout << "-------------------------------------------------------\n";
            std::cout << "School pizza      Bread       Watermelon\n";
            std::cout << "You: ";
            std::cin >> food_options;
            std::string food_optionsLower = toLower(food_options);
            
            if (food_optionsLower == "bread") {
                std::cout << "The Spoon ate the bread! She thought it was good!\n";
            }
        }
    }
    
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Good Job!! Our Spoon is now full from one slice of bread (ig)\n";
    
    // learning how to give your pretty spoon a bath cause stinky
    std::cout << "Now that we know how to feed our spoon, let's learn how to give our spoon a bath!\n";
    std::cout << "To give your spoon a bath, call your spoon and say 'Bath'! Try it out!\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout << "You: ";
    std::cin >> call_tot;
    call_totLower = toLower(call_tot);
    
    if (call_totLower == spoonnameLower) {
        std::cout << spoonname << " walks up to you!\n";
    } else {
        std::cout << "-------------------------------------------------------\n";
        std::cout << "Remember, you have to call your spoon by typing '" << spoonname << "' and then say 'Bath'!\n";
        std::cout << "-------------------------------------------------------\n";
        std::cout << "You: ";
        std::cin >> call_tot;
        call_totLower = toLower(call_tot);
        
        if (call_totLower == spoonnameLower) {
            std::cout << spoonname << " walks up to you!\n";
        }
    }
    
    std::cout << "You: ";
    std::cin >> options;
    optionsLower = toLower(options);
    
    if (optionsLower == "bath") {
        std::cout << "You bring " << spoonname << " to the sink.\nYou put some of the Dishsoap that you bought fron the pet shop on her.\nYou start to clean " << spoonname << " until she is completly clean!";
    } else {
        std::cout << "-------------------------------------------------------\n";
        std::cout << "Remember to enter 'Bath' (or 'bath' works too now!)\n";
        std::cout << "-------------------------------------------------------\n";
        std::cout << "You: ";
        std::cin >> options;
        optionsLower = toLower(options);
        
        if (optionsLower == "bath") {
            std::cout << "You bring " << spoonname << " to the sink.\nYou put some of the Dishsoap that you bought fron the pet shop on her.\nYou start to clean " << spoonname << " until she is completly clean!\n";
        }
    }
    
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Your pet spoon is bored. Let's take your pet spoon on a walk! To take your pet on a walk, call your pet and Enter 'Walk'\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout << "You : ";
    std::cin >> call_tot;
    call_totLower = toLower(call_tot);
    
    if (call_totLower == spoonnameLower) {
        std::cout << spoonname << " walks up to you!\n";
        std::cout << "You: ";
        std::cin >> options;
        optionsLower = toLower(options);
    } else {
        std::cout << "Erm, you need to enter your pet's spoon name\n";
        std::cout << "You: ";
        std::cin >> call_tot;
        call_totLower = toLower(call_tot);
        
        if (call_totLower == spoonnameLower) {
            std::cout << spoonname << " walks up to you!\n";
            std::cout << "You: ";
            std::cin >> options;
            optionsLower = toLower(options);
        }
    }
    
    if (optionsLower == "walk") {
        std::cout << "You're going on a walk with your pet, " << spoonname << "!! Yay!\n";
        std::cout << spoonname << " meets pet fork. It seems like they're having fun!\n";
        std::cout << spoonname << " now has a friend, Yayayaya!\n";
        xp = xp + 10;
        std::cout << "-------------------------------------------------------\n";
        std::cout << "+ " << xp << " xp. You now have " << xp << " xp!";
    }
    
    std::cout << "\nCongrats, you just did the tutorial! You have learned all the basics on how to take care of your spoon!\n";
    std::cout << "Do You understand everything? (Yes or no)\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout << "You: ";
    std::cin >> understand;
    std::string understandLower = toLower(understand);
    
    if (understandLower == "yes") {
        std::cout << "Good! Let's start this!\n";
    }
    if (understandLower == "no") {
        tutoriel();
    }
    std::cout << "-------------------------------------------------------\n";
}

// --------------------------------------------------------------------------------------------------------------
// greg
void game() {
    while (true) {
        std::string where_to_go_greg;
        std::string call_tot;
        std::string shop_options;
        std::string food_options;
        std::string options;
        
        std::cout << spoonname << " walks around the house, exploring every part of the house\n";
        std::cout << "You currently have $" << money << " and " << xp << " XP\n";
        std::cout << "Enter " << spoonname << " to call your spoon, or 'quit' to exit the game\n";
        std::cout << "You: ";
        std::cin >> call_tot;
        
        std::string call_totLower = toLower(call_tot);
        std::string spoonnameLower = toLower(spoonname);
        
        if (call_totLower == "quit") {
            std::cout << "thanks for playing stinky pet spoon\n";
            return;
        }
        
        if (call_totLower == spoonnameLower) {
            std::cout << spoonname << " walks up to you!\n";
            std::cout << "What do you want to do? (Feed, Bath, Walk)\n";
            std::cout << "You: ";
            std::cin >> options;
            std::string optionsLower = toLower(options);
            
            // the feed stuff for options
            if (optionsLower == "feed") {
                std::cout << "-------------------------------------------------------\n";
                std::cout << "School pizza (1)      Bread (2)       Watermelon (3)\n";
                std::cout << "You: ";
                std::cin >> food_options;
                std::string food_optionsLower = toLower(food_options);
                
                if (food_optionsLower == "school pizza" || food_optionsLower == "1") {
                    std::cout << spoonname << " ate the School pizza! Gross..\n";
                    xp += 5;
                    std::cout << "+ 5 XP! You now have " << xp << " XP!\n";
                } else if (food_optionsLower == "bread" || food_optionsLower == "2") {
                    std::cout << spoonname << " ate the Bread! Yummers\n";
                    xp += 5;
                    std::cout << "+ 5 XP! You now have " << xp << " XP!\n";
                } else if (food_optionsLower == "watermelon" || food_optionsLower == "3") {
                    std::cout << spoonname << " ate the Watermelon! So yummers!!!!\n";
                    xp += 8;
                    std::cout << "+ 8 XP! You now have " << xp << " XP!\n";
                }
            }
            
            // Bath option
            else if (optionsLower == "bath") {
                std::cout << "You bring " << spoonname << " to the sink.\n";
                std::cout << "You put some of the Dishsoap that you bought from the pet shop on her.\n";
                std::cout << "You start to clean " << spoonname << " until she is completely clean!\n";
                xp += 10;
                std::cout << "+ 10 XP! You now have " << xp << " XP!\n";
            }
            
            // Pet walk (real)
            else if (optionsLower == "walk") {
                std::cout << "You tell " << spoonname << " that you're taking her on a walk.\n";
                std::cout << "Where do you want to go?\n";
                std::cout << "1. Store | 2. Park | 3. Cereal museum\n";
                std::cout << "You: ";
                std::cin >> where_to_go_greg;
                std::string where_to_go_gregLower = toLower(where_to_go_greg);
                
                if (where_to_go_gregLower == "1" || where_to_go_gregLower == "store") {
                    std::cout << "\nYou walked to the store with " << spoonname << "!!\n";
                    std::cout << "The shopkeeper greets you and your spoon.\n";
                    money += 20; 
                    xp += 15;
                    std::cout << "+ $20! You now have $" << money << "\n";
                    std::cout << "+ 15 XP! You now have " << xp << " XP!\n";
                } else if (where_to_go_gregLower == "2" || where_to_go_gregLower == "park") {
                    std::cout << "\nYou walked to the park with " << spoonname << "!!\n";
                    std::cout << spoonname << " plays with other spoons and has a great time!\n";
                    xp += 20;
                    std::cout << "+ 20 XP! You now have " << xp << " XP!\n";
                } else if (where_to_go_gregLower == "3" || where_to_go_gregLower == "cereal museum" || where_to_go_gregLower == "cereal" || where_to_go_gregLower == "museum") {
                    std::cout << "\nYou walked to the cereal museum with " << spoonname << "!!\n";
                    std::cout << spoonname << " is amazed by all the cereal history!\n";
                    xp += 25;
                    std::cout << "+ 25 XP! You now have " << xp << " XP!\n";
                }
            }
        } else {
            std::cout << "There is not a command for that..\n";
        }
        
        std::cout << "-------------------------------------------------------\n";
    }
}
