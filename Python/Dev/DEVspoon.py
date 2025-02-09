import sys

# *** important strings ***
spoonname = ""
xp = 0
username = ""
money = 777

def main():
    ok = ""
    what = ""

    # this is spoon. cause spon is greg
    # too many warnings greg help
    print("                                         ")
    print("                                        ")
    print("  ____  _____     ___     ___     ___    ")
    print(" /',__\/\ '__`\  / __`\  / __`\ /' _ `\  ")
    print("/\__, `\ \ \L\ \/\ \L\ \/\ \L\ \/\ \/\ \ ")
    print("\/\____/\ \ ,__/\ \____/\ \____/\ \_\ \_\ ")
    print(" \/___/  \ \ \/  \/___/  \/___/  \/_/\/_/")
    print("          \ \_\                          ")
    print("           \/_/                          \n")

    print("Made by 5quirre1 and Nomaakip\nRewritten in Python by mpax235")
    print("-------------------------------------------------------")
    print("Welcome to Spoon. Say 'Info' for what Spoon is about.\nSay anything else to continue on your adventure of taking care of a spoon rgeg")

    what = input()

    if (what == "info" or what == "Info" or what == "INFO"):
        print("-------------------------------------------------------")
        print("This game is about taking care of a pet spoon. Don't ask why cause like, it's very useful lmao\nSome stuff that is going to be updated in later updates:\n\nA saving system\nRandom events when you like use the command 'Check' or something\nRandom cool stuff\nDo You want to know some bugs that have been found? (Say 'Bugs')")

        ok = input()

        if (ok == "why" or ok == "Why"):
            print("I just said to not ask vro\n")
        
        if (ok == "skibidi" or ok == "SKIBIDI" or ok == "Skibidi"):
            print("Peak")
    
    if (what == "No" or what == "no"):
        print("Ok, geez")
    
    if (ok == "Bugs" or ok == "bugs"):
        print("-------------------------------------------------------")
        print("If You say anything else to the Buying of the Spoon part, it will completly skip that :sob:\nThat's all for now...")

    adoption()
    viewingarea()
    store_at_start()
    tutoriel()
    game()

# all the defs greg (I put it down here cause greg)
def adoption():
    print("-------------------------------------------------------")
    print("Dominic: Welcome to the spoon adoption place, I am the granpapa of all the\nspoons here, greg. Wait, You're not greg, what is your name, random person?")
    
    username = input("You: ")

    if (username == "Greg" or username == "greg"):
        print("oh, so you are greg, mb")
        print(f"Dominic: K, so {username}, let's take you over to the spoon viewing area so you can check out the pet spoons")
    else:
        print(f"K, so {username}, let's take you over to the spoon viewing area so yo can check out the pet spoons")

def viewingarea():
    buy = ""
    useroption = ""
    buy2 = ""
    buy3 = ""
    print("\nDominic: Welcome to the viewing area where you will find your pet spoon for life")
    print("-------------------------------------------------------")
    print("Dominic: There is only one pet spoon left. It's a She and is 7 months old")
    print("Dominic: Do you want to buy her? She's only $3\n")
    print("You have $800, y/n")
    buy = input("You: ")

    if (buy == "y" or buy == "yes" or buy == "Yes"):
        print("You have bought your very first pet spoon! Now that you have bought a pet spoon, you're gonna need some supplies so that you can take care of your spoon!\n")

    if (buy == "n" or buy == "no" or buy == "No"):
        print("So the thing about that is that you can't say no. You have 2 options. Buy the spoon or quit the game. (Buy or quit)\n")
        useroption = input("You: ")

        if (useroption == "quit" or useroption == "Quit"):
            print("No one likes you.")
            sys.exit(888888888)
        
        if (useroption == "Buy" or useroption == "buy"):
            print("Do you want to buy her? She's only $3\n")
            print("You have $800, y/n")
            buy2 = input("You: ")
    
    if (buy2 == "y" or buy2 == "yes" or buy2 == "Yes"):
        print("You have bought your very first pet spoon! Now that you have bought a pet spoon, you're gonna need some supplies so that you can take care of your spoon!\n")
    
    if (buy2 == "n" or buy2 == "no" or buy2 == "No"):
        print("Nope, try again.\n")
        print("Dominic: Do you want to buy her? She's only $3\n")
        print("You have $800, (y)")
        buy3 = input("You: ")
    
    if (buy3 == "y" or buy3 == "yes" or buy3 == "Yes"):
        print("You have bought your very first pet spoon! Now that you have bought a pet spoon, you're gonna need some supplies so that you can take care of your spoon!\n")

def store_at_start():
    global money
    global moneybefore
    money = ""
    moneybefore = ""
    moneybefore = 797
    foodbuy = ""
    essentialsbuy = ""
    print("\nWelcome to the Spoon pet shop! This place will have everything you'll ever need to take care of your spoon! We also have a deal on so it's your lucky day!\n")
    print("We'll start off by buying some food for your pet spoon. Buy all of them by typing 'All'\n")
    print("School pizza      Bread       Watermelon")
    print("     $3            $1             $3            ")
    foodbuy = input("You: ")
    
    if (foodbuy == "all" or foodbuy == "All"):
        print("You have bought school pizza, Bread, Wathermelon!")
        money = moneybefore - 7
        print(f"You now have ${money} left!")
    else:
        print("-------------------------------------------------------")
        print("I think you meant to say 'All' but that was too hard for you. Try again.")
        print("-------------------------------------------------------")
        print("\nWelcome to the Spoon pet shop! This place will have everything you'll ever need to take care of your spoon! We also have a deal on so it's your lucky day!\n")
        print("We'll start off by buying some food for your pet spoon. Buy all of them by typing 'All'\n")
        print("School pizza      Bread       Watermelon")
        print("     $3            $1             $3            ")
        foodbuy = input("You: ")

        if (foodbuy == "all" or foodbuy == "All"):
            print("You have bought school pizza, Bread, Wathermelon!")
            money = moneybefore - 7
            print(f"You now have ${money} left!")
    
    print("-------------------------------------------------------")
    print("\nGreat! Now that you have food to feed your pet spoon, let's get some essentials that will make your life and your spoon's life easier!")
    print("I recommend buy all of these. Type 'All'.\n")
    print("Yummy oil  Dishwasher pods   Collar   Bed")
    print("   $3            $5            $3     $9\n")
    essentialsbuy = input("You: ")

    if (essentialsbuy == "all" or essentialsbuy == "All"):
        print("You have bought Yummy oil, Dishwasher pods, collar and a bed!")
        money = moneybefore - 20
        print(f"You now have ${money} left!")
    else:
        print("-------------------------------------------------------")
        print("I think you meant to say 'All' but that was too hard for you. Try again.")
        print("-------------------------------------------------------")
        print("\nGreat! Now that you have food to feed your pet spoon, let's get some essentials that will make your life and your spoon's life easier!")
        print("I recommend buy all of these. Type 'All'.\n")
        print("Yummy oil  Dishwasher pods   Collar   Bed")
        print("   $3            $5            $3     $9\n")
        essentialsbuy = input("You: ")

        if (essentialsbuy == "all" or essentialsbuy == "All"):
            print("You have bought Yummy oil, Dishwasher pods, collar and a bed!")
            money = moneybefore - 20
            print(f"You now have ${money} left!")
    
    print("-------------------------------------------------------")
    print("Congrats! You have everything you'll need for your pet spoon! The Store is always open for you to buy more supplies!\nI hope you enjoy your time as a new spoon owner!!")

def tutoriel():
    call_tot = ""
    options = ""
    food_options = ""
    feed = ""
    understand = ""

    print("-------------------------------------------------------")
    print("You have brought your spoon home! While she explores the house, you need to give her a name!\nWhat should their name be?")
    global spoonname
    spoonname = input("You: ")
    print(f"Your spoon has been named {spoonname}!")
    print("-------------------------------------------------------")
    print(f"{spoonname} walks around her new house.")
    # learning how to call your spoon regegege
    print("-------------------------------------------------------")
    print(f"You can call your spoon over by typing \"{spoonname}\"! Try it out!")
    print("-------------------------------------------------------")
    call_tot = input("You: ")
    if (call_tot == "skip" or call_tot == "Skip"):
        print("Skipping tutoriel...")
        game()
        return

    if (call_tot == spoonname):
        print(f"{spoonname} walked over to you!")
        print("-------------------------------------------------------")
        print("Good job! Now that we know how to call our spoon, let's learn how to feed our spoon!")
    else:
        print("-------------------------------------------------------")
        print(f"Remember, you have to call your spoon by typing \"{spoonname}\"")
        print("-------------------------------------------------------")
        call_tot = input("You: ")
        if (call_tot == spoonname):
            print(f"{spoonname} walked over to you!")

        print("-------------------------------------------------------")
        print("Good job! Now that we know how to call our spoon, let's learn how to feed our spoon!")
    
    # learning how to feed
    print("-------------------------------------------------------")
    print("To give food to your spoon, you would call your spoon like normal but you would type 'Feed'! Try it out!")
    print("-------------------------------------------------------")
    call_tot = input("You: ")
    if (call_tot == spoonname):
        print(f"{spoonname} walks up to you!")
    else:
        print("-------------------------------------------------------")
        print(f"Remember, you have to call your spoon by typing \"{spoonname}\" and then say 'Feed'!")
        print("-------------------------------------------------------")
        print("To give food to your spoon, you would call your spoon like normal but you would type 'Feed'! Try it out!")
        print("-------------------------------------------------------")
        call_tot = input("You: ")
        if (call_tot == spoonname):
            print(f"{spoonname} walks up to you!")
    
    options = input("You: ")
    if (options == "Feed"):
        print("-------------------------------------------------------")
        print("Good job! Let's give our spoon some bread! Type 'Bread'")
        print("-------------------------------------------------------")
        print("School pizza      Bread       Watermelon")
        food_options = input("You: ")
        if (food_options == "Bread"):
            print("The Spoon ate the bread! She thought it was good!")
    else:
        print("-------------------------------------------------------")
        print("Make sure to Type 'Feed' and not 'feed'!")
        print("-------------------------------------------------------")
        options = input("You: ")
        if (options == "Feed"):
            print("-------------------------------------------------------")
            print("Good job! Let's give our spoon some bread! Type 'Bread'")
            print("-------------------------------------------------------")
            print("School pizza      Bread       Watermelon")
            food_options = input("You: ")
            if (food_options == "Bread"):
                print("The Spoon ate the bread! She thought it was good!")
    
    print("-------------------------------------------------------")
    print("Good Job!! Our Spoon is now full from one slice of bread (ig)")

    print("Now that we know how to feed our spoon, let's learn how to give our spoon a bath!")

    print("To give your spoon a bath, call your spoon and say 'Bath'! Try it out!")
    print("-------------------------------------------------------")
    call_tot = input("You: ")
    if (call_tot == spoonname):
        print(f"{spoonname} walks up to you!")
    else:
        print("-------------------------------------------------------")
        print(f"Remember, you have to call your spoon by typing \"{spoonname}\ and then say 'Bath'!")
        print("-------------------------------------------------------")
        call_tot = input("You: ")
        if (call_tot == spoonname):
            print(f"{spoonname} walks up to you!")
            options = input("")
    
    options = input("You: ")
    if (options == "Bath"):
        print(f"You bring {spoonname} to the sink.\nYou put some of the Dishsoap that you bought from the pet shop on her.\nYou start to clean {spoonname} until she is completely clean!")
    else:
        print("-------------------------------------------------------")
        print("Remember to spell it as 'Bath' and not 'bath'!")
        print("-------------------------------------------------------")
        options = input("You: ")
        if (options == "Bath"):
            print(f"You bring {spoonname} to the sink.\nYou put some of the Dishsoap that you bought from the pet shop on her.\nYou start to clean {spoonname} until she is completely clean!")
    
    print("-------------------------------------------------------")
    print("Your pet spoon is bored. Let's take your pet spoon on a walk! To take your pet on a walk, call your pet and Enter 'Walk'")
    print("-------------------------------------------------------")
    call_tot = input("You: ")
    if (call_tot == spoonname):
        print(f"{spoonname} walks up to you!")
        options = input("You: ")
    else:
        print("Erm, you need to enter your pet's spoon name")
        if (call_tot == spoonname):
            print(f"{spoonname} walks up to you!")
            options = input("You: ")
    
    if (options == "Walk"):
        print(f"You're going on a walk with your pet, {spoonname}!! Yay!")
        print(f"{spoonname} meets pet fork. It seems like they're having fun!")
        print(f"{spoonname} now has a friend, Yayayaya!")
        global xp
        xp = xp + 10
        print("-------------------------------------------------------")
        print(f"+ {xp} xp. You now have {xp} xp!")
    
    print("Congrats, you just did the tutorial! You have learned all the basics on how to take care of your spoon!")
    print("Do You understand everything? (Yes or no)")
    print("-------------------------------------------------------")
    understand = input("You: ")
    if (understand == "Yes" or understand == "yes"):
        print("Good! Let's start this!")
    
    if (understand == "No" or understand == "no"):
        tutoriel()

    print("-------------------------------------------------------")
# --------------------------------------------------------------------------------------------------------------
# greg
def game():
    where_to_go_greg = ""
    call_tot = ""
    shop_options = ""
    food_options = ""
    options = ""
    print(f"{spoonname} walks around the house, exploring the every part of the house")
    print(f"you currently have {money}$")
    call_tot = input("")
    
    if (call_tot == spoonname):
        print(f"{spoonname} walks up to you!")
        options = input("You: ")
        # the feed stuff for options
        if (options == "feed" or options == "Feed"):
            print("-------------------------------------------------------")
            print("School pizza      Bread       Watermelon")
        food_options = input("")
        if (food_options == "School Pizza" or food_options == "school pizza" or food_options == "School pizza" or food_options == "1"):
            print(f"{spoonname} ate the School pizza! Gross..")
            game()

        if (food_options == "Bread" or food_options == "bread" or food_options == "2"):
            print(f"{spoonname} ate the Bread Yummers")
            game()

        if (food_options == "Watermelon" or food_options == "watermelon" or food_options == "3"):
            print(f"{spoonname} ate the Watermelon! So yummers!!!!")
            game()
        
        if (options == "walk" or options == "Walk"):
            print(f"You tell {spoonname} that you're taking her on a walk.")
            print("Where do you want to go?")
            print("1. Store | 2. Park | 3. Cereal museum")
            where_to_go_greg = input("You: ")
            if (where_to_go_greg == "1" or where_to_go_greg == "Store" or where_to_go_greg == "store"):
                print(f"You walked to the store with {spoonname}!!")
    else:
        print("There is not a command for that.")

if __name__ == "__main__":
    main()
