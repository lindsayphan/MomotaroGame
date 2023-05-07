[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10868992&assignment_repo_type=AssignmentRepo)
 
# Momotaro: The Fight
 
 Authors: [Jemaima Roie Ceralde](https://github.com/jaeceralde), [Alice Lai](https://github.com/AliceLaiHK), [Lindsay Phan](https://github.com/lindsayphan), & [Eunice Wang](https://github.com/ewang117)

## Project Description
_Momotaro: The Fight_ is a text-based role-playing game where the player embarks on a journey to defeat the darkness that is threatening to destroy their hometown. They play as Momotaro and are destined to meet 3 legendary animals — a dog, a monkey, and a bird — to aid them on their journey. Depending on their selected companion at a given time, they will be granted different abilities. Furthermore, they will be rewarded with rice cakes and green tea to help them gather their strength. Along the way, they will encounter onis to which they must defeat with the assistance of their legendary fauna through a series of battles. To win the game, the player must beat the final boss, the Demon King. There are two difficulties to choose from: normal (all items and abilities available) and hard (tougher enemies and no healing abilities), for those who like more of a challenge. 
 
Why is it important or interesting to you?
* The group unanimously agreed to create a role-playing game for our final project because everyone in the group likes to play games and finds joy in the wonders of storytelling. Furthermore, we wanted to see what it would be like to be on the development side of gaming instead of just playing.
 
What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
* To build the RPG, we used the following:
    _C++_ as the language
    _VSCode_ to write the code
    _GitHub_ to store everyone’s work/contribution in one place
    _Creately_ to create the user navigation diagram
 
What will be the input/output of your project?
* The project will ask the user/player to choose between options concerning the action they want. For example, the options might include — but are not limited to: Which companion would you like to have? How do you want to attack? What items would you like to use?
Depending on the choice made by the user, the corresponding action will be taken and displayed — as well as the consequences that follow the chosen option. Additionally, the player prompts (mentioned above) will be displayed on the screen for the user to read.

What are the features that the project provides?
 
* The game has features such as three (3) different character types to choose from, multiple inventory items and attack abilities whose selection depends on the selected character, two (2) difficulty levels — normal and hard, access to character health and inventory items at user’s convenience, enemies to battle along the way, a boss to defeat to finish the game, and an option to restart the game once the player reaches the end (may that be through winning or losing).
 
 > 
 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. You need to pick both time slots during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
### Navigation Diagram
![General Navigation Diagram](screencaps/GeneralNaviDiagram.jpg)
The diagram represents the general flow of the game. Between the storytelling, the player will be prompted to select amongst the displayed options. Depending on their choice, the story will proceed accordingly. A number of loops exist in the program, as depicted in the diagram linked above, because there is a circular pattern linking the story (of the game) and the actions (available for a vote) together.

### Screen Layouts
The game is entirely played in the terminal and will mainly use two screens: one for the narrative/story parts and one for the combat/fighting parts. Additionally, there is an inventory, swap (companions), and stats screen. 
* Narrative: outputs a description of the current setting/story beat, then prompts the user to make a decision. 
   - Expected input: 'YES' or 'NO' to progress the story, 'INVENTORY', 'SWAP', or 'STATS' to change companion or view information. 
* Combat: outputs current health of Momotaro, companions, and enemies, then prompts user to choose an action. 
   - Expected input: 'ATTACK', 'DEFEND', 'HEAL' (only usable when selecting Momotaro's action), 'SWAP' (only usable when selecting companion's action), and 'STATS'.
* Inventory: outputs list of items (and quantity of each item), then prompts user to select one.
    - Expected input: number corresponding to item or 'EXIT'.
* Swap: outputs available companions, then prompts user to choose one.
    - Expected input: 'DOG', 'MONKEY', 'BIRD', or 'EXIT'
* Stats: outputs the current health, attack, and defense stats of Momotaro and companions.

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 
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
