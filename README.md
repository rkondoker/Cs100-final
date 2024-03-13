[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=9903484&assignment_repo_type=AssignmentRepo)
 
# Gacha Simulator
 
Authors: Russell Kondoker (Github link:  https://github.com/rkondoker), Adrian Resendez (Github link:  https://github.com/adrian-resendez), Catherine Truong (Github link:  https://github.com/catherinetruong), Katelyn Poon (username: puffwaffles, Github link: https://github.com/puffwaffles)


## Project Description
  
  * Why is it important or interesting to you?
 
    The project is interesting because it simulates a game genre that is becoming extremely popular. The gacha genre is a genre that appeals to many different types of players with the anticipation of receiving specialized characters at random. Gacha games make a large amount of money from paying players who are eager to get the most rare and elusive characters. The simulator’s purpose is to explore the probabilities of acquiring these special characters and observe the capabilities of the characters in battle as a casual player.
  * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
    *  We plan on using the C++ language and the Visual Studio Code IDE to produce our project.
    *  We may also use other gacha games and fighting games as references to determine calculations for character battle stats and in game transaction costs
  * What will be the input/output of your project?
    * The project will take in user input
    * The project will display output text in the console
    * Menus will consist of an ordered list of options for users to select
    * Each option will have a corresponding number which can be used as input
    * Users will be able to enter any strings, but the console will loop the menu prompt until the user enters a number that corresponds to an option on the list 
    * Each menu will have a back option to display the previous menu or the main menu
    * The values for each currency will be displayed at the top of every menu
    * There will be seven big menus:
      * Login menu
        * When the program first starts, the login menu will ask for a new username and password
        * Subsequent logins will prompt the user for the same username and password
        * After logging in, the day and login reward will be displayed (each login counts as a new day) 
      * Main menu
        * Displays options for the summon, inventory, battle, shop and mission menus and an exit option to go back to the login menu
      * Summon menu
        * Displays summon options
        * Displays summon rates
        * Displays characters from summons
      * Inventory menu
        * Displays characters in order of type, rarity and level
        * Displays character type, rarity and level
        * Displays battle stats of characters
        * Displays items characters equip
        * Displays equippable items 
      * Battle menu 
        * Displays battle options
        * Displays constructed team
        * Displays opponent teams  
        * Displays possible prize for winning the battle
      * Shop menu
        * Displays packages of currency that the player can purchase
        * Displays food and equippable items that can be purchased 
      * Missions menu
        * Displays uncompleted missions for the player to do
        * Displays rewards for each mission
        * Displays progress for missions
        * Displays completed missions in a separate list
      * Battle displays
        * The opponents team will be listed at the top
        * The player’s team will be listed below
        * During the player’s turn, options for selecting the player’s team members to attack and which opponent team member to attack will be displayed under both teams
      * Commentary describing each team's actions will be displayed at the bottom. Commentary will state the amount of damage done, amount of health points healed, the two characters in the altercation, skills that are used, buffs that affect teams, when shields break, statuses that affect characters and when characters are knocked out.
      * Under each member’s name, the following information will be shown:
        * Character health points appears as a fraction
        * Character skill mileage appears as a fraction
        * Character skill buffs (buffs are applied increases in stats)
          * If the character has buffs, it will state that the buff is applied
        * Character health status (ailments include poisoning and paralysis)
          * States the ailment of the character if the character has any 
        * Knocked out characters will be removed from the team list for subsequent turns in battle
        * After the battle, win or lose will be printed along with a reward if the battle was won
  * What are the features that the project provides?
    * Summoning
      * A free 3-5 star 10+1 summon is given to the player from the first login 
      * Allows you to choose between different summon options (1-3 stars or 3-5 stars)
      * Allows you to choose between summoning 1 character and summoning 10+1 (the last 1 is a confirmed 2-3 star for 1-3 summons and 4-5 star for 3-5 summons)
      * Summons create a list of randomly generated characters that will be added to the character inventory
      * Allows you to view summon rates for different summons 
      * Allows you to view summoned characters 
      * Adds summoned characters to character inventory if inventory has enough space. If not, a warning is issued
    * Inventory   
      * The player starts out with an empty inventory for characters and items
      * The player can sort characters in the inventory based on type, rarity, level and how recent the character was summoned
      * The player can filter characters in the	 inventory based on type, rarity and level 
      * The player can view a characters level, stats, skill and equipped items
      * The player can release characters for randomly chosen rewards
      * The player can feed food to characters to increase levels
      * The player can equip or unequip items off characters
      * Players can view unequipped items in the item inventory 
      * The player can sort characters in the inventory based on rarity, and how recent the item was acquired
      * The player can filter characters in the	 inventory based on rarity 
      * Players can sell unequipped items for coins
    * Shops 
      * Allows players to purchase bulk currency packages (coins, gems, energy, food) for gems and real money (the real money is an increasing value that represents the amount of real world money that would be spent if it was used for the game)
      * Allows players to buy equipment for coins
      * Allows players to buy small amounts of food for coins
    * Battling 
      * Allows players to choose between 1 v 1 battles, boss battles, 4 v 4 battles and dungeons
      * 1 v 1 battles- a battle between 1 of your characters and 1 randomly chosen cpu character
        * Yields currency for wins
        * Tracks wins and losses
      * Boss battles- a battle between a team of 4 of your characters and 1 higher level and rarity cpu character
        * Yields rarer currency like gems and higher rarity equipment (4-6 stars)
      * 4 v 4 battles- a battle between a team of 4 of your characters and a team of 4 randomly chosen cpu characters
        * Yields currency for wins
        * Tracks wins and losses
      * Dungeons- 3 battles between a team of 4 of your characters and teams of 4 cpu characters  
        * Yields equipment as rewards 
        * Levels become progressively harder with higher level and rarity opponents
        * Harder levels have provide higher rarity equipment
        * Levels after the first level are locked until previous levels have been won
        * Allows characters to assemble different teams for each type of battle
      * Allows players to view rewards gained from winning battles
      * Uses energy to initiate battles
      * Stops player from initiating battles if there is not enough energy for a battle
      * Allows character to see health and statuses of both teams
      * Allows players to select which team members to attack and which opponent characters should be attacked
      * Allows players to choose between using a regular attack or a skill
      * Skills require certain amount of turns to pass in order to be used
      * A skills mileage will be reset after being used
      * Skills can be sorted into different categories
         * Attacker- attacks entire opposing team with a stronger attack 
         * Defender- creates a shield for the entire team by 20% max health for a few turns
         * Support- provides a attack buff that increases team attack or a defense buff that increases team defense for a few turns
         * Debuffer- has a chance of poisoning opponents for a few turns (Poisoning decreases health by 5%) or has a chance of paralyzing opponents for a few turns
         * Healer- heals entire team by 30% max health
      * Provides player a commentary of the battle
    * Missions
      * Allows players to gain currency rewards for completing tasks
      * Allows players to see progress on completing missions
      * Allows players to see completed and uncompleted missions
    * Login 
      * Allows you to create a new username and password for login when program starts
      * Subsequent logins require you to type in the newly created username and password 
      * Prompts player for username and password again until correct username and password are entered 
      * Login menu can be accessed by picking the exit option in the main menu
      * Each login menu visit counts as a new day 
      * Grants player a random reward for each day logged in

 
  
  ## Phase II
  
## Class Diagram
![UML Diagram drawio](https://user-images.githubusercontent.com/93177205/218374873-f4fe430e-126b-473b-ae3c-b95f8de48849.png)

The class diagram consists of 10 classes: Game, Summon, Character, Equipment, Skill, Inventory, BattleCharacter, Battle, Currency, and Missions. 
  * The Game class provides functions for menu displays, access to the shop for in game purchases, and mission lists. It consists of the Character, Summon, Inventory, Currency, Battle and Mission objects. It also contains equipment objects. It will use these objects to call on other functions of other classes for access. 
  * The Summon class provides functions that create characters to be added to the inventory, allows users to see the characters they summoned and view summon rates and totals of characters summoned. It contains Character objects in its summons. 
  * The Character class represents a character of a specific type, rarity, battle type and level. Each function in the Character class allows you to see or change components (changeable components include level and equipment) of the character. The class contains an equipment object and consists of a skill object. 
  * The Equipment and Skill classes are used to represent equipment and skills used by characters. They only have getter methods to access their components. 
  * The Inventory class consists of vectors of Character and Equipment objects. The Inventory class contains functions that allows you to sort, filter, access, remove and display characters and equipment. 
  * The BattleCharacter class is derived from the Character class that provides battle capabilities to the characters. Its methods allow characters to attack each other, use skills and be attacked and allows the game to determine if the character is defeated in battle. 
  * The Battle class consists of vectors of BattleCharacter objects for the player and opponent teams. Battle class allows users to perform four different battles (one vs one, boss, four vs four and dungeons) for their characters to participate in. Players can view wins and losses for arena battles (one vs one and four vs four) and receive awards (currency and equipment) for winning in all battles. 
  * The Currency class represents the currency (coins, gems, food, summon tickets, energy, real money) used in the game. The class has functions that can get or change currency amounts. Other classes will use a reference of the Game class's Currency object to increase or decrease currency amounts. Actions like performing summons, feeding characters and initiating battles will decrease currency amounts. Actions like releasing characters, selling equipment and completing missions increase currency amounts. Currency can also be interchanged with one another by purchasing packages in the Game class shop. 
  * The Mission class represents tasks (like acquiring a certain amount of characters or winning a certain amount of battles) that can be completed for currency rewards. Its functions allow you to view the requirements, progress, rewards and completion status of missions and update missions as well.    
 
 > ## Phase III
 > ![UML Diagram drawio](https://github.com/cs100/final-project-gacha-gang/blob/6c026b5c94aaa64e4cea19b7dfc03f24da559c7e/image.png)

  
 We created a new UML diagram that now includes more classes to follow the single-responsibility principle. For all of our core classes, we decided to separate them into more classes. For example, we originally had one main Character class that included all the information about the Character, i.e. level, skills, and general stats. Whereas moving onto this phase, we separated the original Character class into a Skills, Level, Character Class, etc. 
Based on those classes, we included an Outputter class that allows us to display this information separately from the class itself. 

By separately creating these classes, we are also allowed to use the open-closed principle which we can add to the main class, where for example, a character can be summoned, the summoned character can have skills and equipment, and then those items can be stored within their inventory.

To follow Liskov’s substitution principle, we created these new classes to be inherited from the main classes. To specify, we implemented more “get” functions that allowed us to use certain methods without forcing an interface that is nondependent.

To incorporate the dependency inversion principle, we used Manager classes that allowed us to use modules that rely on abstract classes. Using separate classes that get outputted through the manager classes, ensures that high-level modules do not depend on low-level modules.

This change helped us to write better code as it allowed us to separate each responsibility. In the beginning, it was overwhelming to begin the large class, where rewriting the code into different classes with different level modules allowed us to be more thorough when coding and what step was needed to do next.

 
  ## Final deliverable
 
 ## Screenshots
 > ![Image](https://github.com/cs100/final-project-gacha-gang/blob/3f64fda8a6bab877b1bde9d92e8a1758e9554dbf/images/image.png)
 
 > Main Menu
 
 > ![Image](https://github.com/cs100/final-project-gacha-gang/blob/3f64fda8a6bab877b1bde9d92e8a1758e9554dbf/images/image2.png)
 
 > Summon Menu
 
 > ![Image](https://github.com/cs100/final-project-gacha-gang/blob/3f64fda8a6bab877b1bde9d92e8a1758e9554dbf/images/image3.png)
 
   > Summoning a 1-3 Star Character Pull.
 
  > ![Image](https://github.com/cs100/final-project-gacha-gang/blob/6e99c8b039c91f312aec10cfcaf63f22f9a1448d/images/image8.png)
 
 > Summoning a 3-5 Star Character Pull.
 
 > ![Image](https://github.com/cs100/final-project-gacha-gang/blob/3f64fda8a6bab877b1bde9d92e8a1758e9554dbf/images/image4.png)
 
 > Viewing Inventory Menu.
 
 > ![Image](https://github.com/cs100/final-project-gacha-gang/blob/3f64fda8a6bab877b1bde9d92e8a1758e9554dbf/images/image5.png)
 
 > Going to View Characters Summoned.
 
 > ![Image](https://github.com/cs100/final-project-gacha-gang/blob/3f64fda8a6bab877b1bde9d92e8a1758e9554dbf/images/image6.png)
 
 > Going from Summon Menu to Display Rates.
 
 > ![Image](https://github.com/cs100/final-project-gacha-gang/blob/8c16974d1f9a7e918ac368065e9cf8c251f42f22/images/image7.png)
 
 > Going from Summon Menu to Display Tools.

 > ![Image](https://github.com/cs100/final-project-gacha-gang/blob/83d3fa3093ffe72d9926b6cea5979dc4137723b6/images/image9.png)
 
 > Inventory Before Remove.
 
  > ![Image](https://github.com/cs100/final-project-gacha-gang/blob/83d3fa3093ffe72d9926b6cea5979dc4137723b6/images/image10.png)
 
 > Menu to choose which Character to Remove.
 
  > ![Image](https://github.com/cs100/final-project-gacha-gang/blob/83d3fa3093ffe72d9926b6cea5979dc4137723b6/images/image11.png)
 
 > Inventory After Remove.
 
 ## Installation/Usage
 
In order to run our project, you would need to download the following folders: “header”, “src”. Additionally, you would need to download the file “main.cpp”, and if you wanted to test it, you would need to download the “test” folder as well as have the google test submodule. After uploading all of the files and folders into an IDE of your choice, you should be able to run it. It will then prompt you through the game, allowing you to end the game by choosing the final option within the menu.

 ## Testing
 
Our project was tested/validated through unit tests. Through these unit tests, we were able to verify the code coverage of the tests, expecting at least 80% to be covered as the goal of the next sprint is to reach 100%. We also checked for memory leaks using valgrind and gdb to ensure that the program runs efficiently and properly.
 
