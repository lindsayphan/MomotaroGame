[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10868992&assignment_repo_type=AssignmentRepo)
 
# Momotaro: The Fight
 
 Authors: [Jemaima Roie Ceralde](https://github.com/jaeceralde), [Alice Lai](https://github.com/AliceLaiHK), [Lindsay Phan](https://github.com/lindsayphan), & [Eunice Wang](https://github.com/ewang117)

## Project Description
_Momotaro: The Fight_ is a text-based role-playing game where the player embarks on a journey to defeat the darkness that is threatening to destroy their hometown. They play as Momotaro and are destined to meet 3 legendary animals — a dog, a monkey, and a bird — to aid them on their journey. Depending on their selected companion at a given time, they will be granted different abilities. Furthermore, they will be rewarded with rice cakes and green tea to help them gather their strength. Along the way, they will encounter onis to which they must defeat with the assistance of their legendary faunas through a series of battles. To win the game, the player must beat the final boss, the Demon King. There are two difficulties to choose from: normal (all items and abilities available) and hard (tougher enemies and no healing abilities), for those who like more of a challenge. 
 
Why is it important or interesting to you?
* The group unanimously agreed to create a role-playing game for our final project because everyone in the group likes to play games and finds joy in the wonders of storytelling. Furthermore, we wanted to see what it would be like to be on the development side of gaming instead of just playing.
 
What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
* To build the RPG, we used the following:  
    - _C++_ as the language  
    - _VSCode_ to write the code  
    - _GitHub_ to store everyone’s work/contribution in one place  
    - _[creately.com](creately.com)_ to create the user navigation diagram 
    - _[diagrams.net](diagrams.net)_ to create the class diagram
 
What will be the input/output of your project?
* The project will ask the user/player to choose between options concerning the action they want. For example, the options might include — but are not limited to: Which companion would you like to have? How do you want to attack? What items would you like to use?
Depending on the choice made by the user, the corresponding action will be taken and displayed — as well as the consequences that follow the chosen option. Additionally, the player prompts (mentioned above) will be displayed on the screen for the user to read.

What are the features that the project provides?
 
* The game has features such as three (3) different character types to choose from, multiple inventory items and attack abilities whose selection depends on the selected character, two (2) difficulty levels — normal and hard, access to character health and inventory items at user’s convenience, enemies to battle along the way, a boss to defeat to finish the game, and an option to restart the game once the player reaches the end (may that be through winning or losing).
 
## User Interface Specification
### Navigation Diagram
![General Navigation Diagram](screencaps/GeneralNaviDiagram.jpg)
The diagram represents the general flow of the game. Between the storytelling, the player will be prompted to select amongst the displayed options. Depending on their choice, the story will proceed accordingly. A number of loops exist in the program, as depicted in the diagram above, because there is a circular pattern linking the story (of the game) and the actions (available for a vote) together.

### Screen Layouts
The game is entirely played in the terminal and will mainly use two screens: one for the narrative/story parts and one for the combat/fighting parts. Additionally, there is an inventory, swap (companions), and stats screen. 
* Narrative: outputs a description of the current setting/story beat, then prompts the user to make a decision. 
   - Expected input: 'YES' or 'NO' to progress the story; 'INVENTORY', 'SWAP', or 'STATS' to change companion or view information. 
   
   ![Narrative Screen ex](screencaps/narrative_screen_example.PNG)
* Combat: outputs current health of Momotaro, companions, and enemies, then prompts user to choose an action. 
   - Expected input: 'ATTACK', 'DEFEND', 'HEAL' (only usable when selecting Momotaro's action), 'SWAP' (only usable when selecting companion's action), and 'STATS'.
   
   ![Combat Screen ex 2](screencaps/combat_screen_example_2.PNG)
* Inventory: outputs list of items (and quantity of each item), then prompts user to select one.
    - Expected input: number corresponding to item or 'EXIT'.
    
    ![Inventory Screen ex](screencaps/inventory_example.PNG)
* Swap: outputs available companions, then prompts user to choose one.
    - Expected input: 'DOG', 'MONKEY', 'BIRD', or 'EXIT'
    
    ![Swap Screen ex](screencaps/swap_example.PNG)
* Stats: outputs the current health, attack, and defense stats of Momotaro and companions.
    ![Stats Screen ex](screencaps/stats_example.PNG)

## Class Diagram
 ![UML Class Diagram](screencaps/UML%20Diagram%232.jpg)
 Above is the UML diagram for the Momotaro: The Fight program. The program functions by creating the necessary data to display the characters and the user’s choices in the terminal. For this diagram, we utilized the single responsibility principle. For example, we initially had each subclass of the Character class have a stats function, its primary task being to update and output a stats menu. However, we decidied to make it its own class s\and its only reason to be changed is to updated the health of each character. We also used the open/closed principle so that we can add another instance of character, choices, or story partswithout having to change the base classes. The interface segregation principle is used as well so the client is not exposed to methods it does not need. By implemented these principles, it made our code more modular, maintainable, and extensible. It also allowed us to work more smoothly as a group when coding our individual tasks. 
 
 The Character class will hold most of the data for each character. The Bird, Dog, and Monkey classes inherit from the Character class, each having their own separate attack, swap, and defend function. The Momotaro and Enemy class also inherit from the Charcter class. The main functions of the Character class are the constructor and the virtual void attack() function that the inherited classes use. The constructor takes in string name, int maxHp, int attackDamage, and int defense parameters. The attack function depletes the health of the opponent that is passed in. The other functions are get functions that return the protected variables. The Momotaro class has the actions of the main character. The heal() function takes in a string item and, depending on the item passed in, adds a specific amount of HP to Momotaro. The defend() function takes in an int enemyHP and creates a defense attack for Momotaro to use against the opponent.
 
 The Choices class holds the necessary data taken in from the user (the choices they make throughout the story). The question() funciton outputs a question that the user has to answer. The executeAnswer1() and executeAnswer2() are virtual void functions, used by the Choices(animal) classes, that carry out the user’s choice (i.e. adding something to their inventory or updating their HP). The Choices class depends on the Difficulty class because the user chooses whether or not they want to play in normal or hard mode which affects the difficulty of defeating the enemies and main boss. 
 
 The StoryParts class is an abstract class that StoryDog, StoryMonkey, and StoryBird inherit from. The Story(animal) classes hold narratives of what happens when Momotaro meets the specified animal (i.e. how they meet and any necessary dialogue). When the function printNarrative() is called, it calls on Choices(animal), through the meet(animal) variable, to further the story depending on the user choice. The Choices(animal) classes depend on the health and inventory classes because each choice the user makes during their encounters with the animals affects either the health or inventory classes. The Choices(animal) classes also depend on the specified character class because the user will not have any access to that animal until it has joined Momotaro’s party. The Story(animal) classes depend on the designated Choices(animal) class. 
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
