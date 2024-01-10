# Software Development Life Cycle (SDLC) Requirements Document

## Project Title: QuestScribe (a C++ text-based adventure game)

### 1. Introduction

#### 1.1 Purpose
*State the purpose of this document and provide an overview of the software to be developed.*  

  The purpose of this document is to be a comprehensive overview of the requirements of this project. The software to be developed 
is a text-based command-line adventure game, written in C++. The game is to have complex memorable characters and a realistic yet 
exciting storyline. The software will have C++ classes for characters, combat moves, character personalities, items, and more. The
game will have a "choose your own adventure" element, where users' choices within the game will change the story, allowing more
replay value. The characters will also change in response to significant plot points in the game story. This game will combine two of
my primary interests - creative writing and C++ programming.

#### 1.2 Scope
*Define the scope of the project, including the features and functionalities that are within and outside the project's boundaries.*  

  This game, like many games, has several entities (characters, items, animals, etc.); these entities will be represented with 
C++ classes. A class, as we know, is a blueprint for objects. The game will have a plot, but the plot will proceed according
to the users' choices. For example, if the current situation is as follows - the Player character approaches a village that
is being terrorized by an evil dragon - and the Player is given the choices of fighting the dragon, joining the dragon, or retreating,
then each choice will make the story go differently. The game's storyline is based on my idea for a book I have been working on;
the Player character must join my cast of characters to save the city of Ibralta (the setting of my game/story) from an evil
ex-superhero. 
  The characters will each be represented by a C++ Character class. Each character's personality will be represented by a C++ 
PersonalityTraits class, which will be built based on the scientifically-valid [Big 5 personality traits](https://www.psychologytoday.com/us/basics/big-5-personality-traits).
The different character types - Hero, Villain, Antihero, Warrior, Scribe, etc - will be derived classes that inherit from the 
Character base class. As for the Personality class, its private member variables will be scores for each of the Big 5 traits,
which will change based on the events of the game (e.g. if a character becomes more rigid/inflexible, their openness score decreases).

##### 1.2.1 Objective

The primary goal of this project is to develop an object-oriented text-based adventure game, written in C++, with classes to 
represent the various objects and entities in the game.

##### 1.2.2 Inclusions:

* ###### **GAMELIST** class (singly-linked-list class for storing lists of items (inventory, list of skills, etc))
  * **Attributes**
    * _head_ptr_: the head pointer of the node
  * **Methods**
    * void print_list(): traverses list, prints each item
    * void add_to_end(T new_data): creates new node with passed-in data, appends that node to the end of the list
    * ItemNode <T> is_in_list(ItemNode <T> current_node): searches for 'current_node' in list, returns ptr to current node if found and NULL if not
    * void add_to_start(T new_data): creates new node with passed-in data, appends that node to the beginning of the list
    * void insert_after(ItemNode <T> current_node, T new_data): creates new node with passed-in data, searches for 'current_node' in list, inserts new node after current node
    * void update_node(ItemNode <T> current_node, T new_data): searches for 'current_node' in list, updates the node's data with 'new_data' parameter
    * T delete_node(ItemNode <T> current_node): searches for 'current_node' in list, deletes it from the list and frees the memory, returns the node data
  * there will also be a separate template class for Nodes
    * Node class attributes: _data_ (the data being stored in the node), _next_node_ (reference to the next node after this one in the list)
    * Node class methods: constructor (for initializing the data and next node), both properties/variables (data and next_node) are public since we need to change them to traverse/update the list
* ###### **CHARACTER** class
  * **Attributes**
    * Name (string): The name of the character. 
    * Personality (*PersonalityTraits* object): The personality traits of the character, represented by a *PersonalityTraits* object.
    * Level (int): The level or experience of the character. 
    * Health Points (HP) - int: Represents the character's health or life. 
    * Mana (or Energy) Points - int: Represents the character's magical or special abilities. 
    * Attack Damage (int): The amount of damage the character deals. 
    * Defense (int): The ability to resist or reduce incoming damage.
    * Inventory (vector of *Item* objects): List of items the character is carrying. 
    * Skills/Abilities (vector of *Ability* objects): List of abilities the character can use.
  * **Methods**
    * void create_personality(int openness, int conscientiousness, int extroversion, int agreeableness, int neuroticism)
      * creates character's Big 5 personality based on passed-in parameters, and stores the info in character's 'Personality' attribute
    * void change_trait(char trait, int new_score)
      * changes one of the character's Big 5 scores (determined by 'trait' variable, e.g. if trait == 'E', we'll change our character's extroversion score) to the given 'new_score' parameter
* ###### **PERSONALITYTRAITS** class (based on the Big 5 methodology for determining personalities)
  * **Attributes** (source: the previous Psychology Today link)
    * Openness score (int): a 0-10 score reflecting how open to new ideas/experiences the character is 
      * openness (to experience): a basic personality trait denoting receptivity to new ideas and new experiences
    * Conscientiousness score (int): a 0-10 score reflecting how hardworking, responsible, structured, etc the character is
      * conscientiousness: a fundamental personality trait—one of the Big Five—that reflects the tendency to be responsible, organized, hard-working, goal-directed, and to adhere to norms and rules
    * Extroversion score (int): a 0-10 score reflecting how extroverted/introverted the character is (score below 5 == introverted, score above 5 == extroverted) 
      * extroversion: a personality trait typically characterized by outgoingness, high energy, and/or talkativeness
        * extroverts: recharge from being with others
        * introverts: recharge from being alone
        * ambiverts: recharge both ways
    * Agreeableness score (int): a 0-10 score reflecting how kind, compassionate, empathetic, and polite the character is
      * agreeableness: a personality trait that can be described as cooperative, polite, kind, and friendly
    * Neuroticism score (int): a 0-10 score reflecting how neurotic (depressed, anxious, self-doubting, etc) the character is 
      * neuroticism: a tendency toward anxiety, depression, self-doubt, and other negative feelings
  * **Methods**
    * _PersonalityTraits()_: default constructor, initializes all personality trait score variables to 0
    * _PersonalityTraits(int O, int C, int E, int A, int N)_: parametrized constructor
      * passes in personality trait scores and initializes each variable to its corresponding parameter 
      * (e.g. O = openness, C = conscientiousness, E = extroversion, etc)
    * _void set_openness_score(int new_openness_score)_: sets openness score to 'new_openness_score' parameter 
    * _void set_conscientiousness_score(int new_conscientiousness_score)_: sets conscientiousness score to 'new_conscientiousness_score' parameter 
    * _void set_extroversion_score(int new_extroversion_score)_: sets extroversion score to 'new_extroversion_score' parameter 
    * _void set_agreeableness_score(int new_agreeableness_score)_: sets agreeableness score to 'new_agreeableness_score' parameter 
    * _void set_neuroticism_score(int new_neuroticism_score)_: sets neuroticism score to 'new_neuroticism_score' parameter
    * _void increment_openness_score()_: increments openness score by 1
    * _void decrement_openness_score()_: decrements openness score by 1
    * _void increment_conscientiousness_score()_: increments conscientiousness score by 1 
    * _void decrement_conscientiousness_score()_: decrements conscientiousness score by 1 
    * _void increment_extroversion_score()_: increments extroversion score by 1 
    * _void decrement_extroversion_score()_: decrements extroversion score by 1 
    * _void increment_agreeableness_score()_: increments agreeableness score by 1 
    * _void decrement_agreeableness_score()_: decrements agreeableness score by 1 
    * _void increment_neuroticism_score()_: increments neuroticism score by 1 
    * _void decrement_neuroticism_score()_: decrements neuroticism score by 1
    * _int get_openness_score()_: returns current openness score 
    * _int get_conscientiousness_score()_: returns current conscientiousness score 
    * _int get_extroversion_score()_: returns current extroversion score 
    * _int get_agreeableness_score()_: returns current agreeableness score 
    * _int get_neuroticism_score()_: returns current neuroticism score
* ###### **GAMEITEM** class
  * **Attributes**
    * Name (string): The name of the item. 
    * Description (string): A brief description of the item's purpose or effects. 
    * Type (enum): Categorization of the item (e.g., weapon, armor, consumable). 
    * Rarity (enum): The rarity level of the item (e.g., common, rare, legendary). 
    * Value (double): The in-game value or cost of the item. 
    * Weight (double): The weight of the item, influencing inventory management. 
    * Durability (int or double): For items that degrade over time or with use. 
    * Effect(s) (list of strings or enums): Any special effects or bonuses conferred by the item.
  * **Methods**
* ###### **COMBATMOVE** class
  * **Attributes**
    * Name (string): The name of the combat move. 
    * Description (string): A brief description of the combat move's execution. 
    * Type (enum or string): The type of combat move (e.g., melee, ranged, special). 
    * Damage (int): The amount of damage dealt by the combat move. 
    * Accuracy (double): The likelihood of successfully hitting the target. 
    * Critical Chance (double): The probability of landing a critical hit. 
    * Stamina Cost (int): If applicable, the amount of stamina or energy required. 
    * Effects (list of strings or enums): Any additional effects or conditions caused by the combat move.
  * **Methods**
* ###### **ABILITY** class
  * **Attributes**
    * Name (string): The name of the ability. 
    * Description (string): A brief description of what the ability does. 
    * Type (enum or string): The type of ability (e.g., offensive, defensive, utility). 
    * Cooldown (int or double): The time it takes before the ability can be used again. 
    * Mana Cost (int): If applicable, the amount of mana or energy required to use the ability. 
    * Range (int or double): The effective range of the ability. 
    * Damage/Healing (int): The amount of damage dealt or healing provided. 
    * Target(s) (*Character* object): The targets affected by the ability (e.g., self, single target, area of effect).
  * **Methods**

### 2. Functional Requirements

#### 2.1 Use Cases
Identify and describe the major use cases of the software.

##### 2.1.1 Use Case 1: [Use Case Name]
- **Description:** [Brief description of the use case]
- **Actors:** [List of actors involved]
- **Preconditions:** [Conditions that must be true before the use case starts]
- **Postconditions:** [Conditions that must be true after the use case completes]
- **Flow of Events:**
    1. [Step 1]
    2. [Step 2]
    3. ...

##### 2.1.2 Use Case 2: [Use Case Name]
...

#### 2.2 Functional Requirements
List the specific functional requirements of the software.

- **Requirement 1:** [Description of the requirement]
- **Requirement 2:** ...
- ...

### 3. Non-Functional Requirements

#### 3.1 Performance
Define performance requirements such as response time, throughput, and resource usage.

#### 3.2 Usability
Specify usability requirements including user interfaces, user experience, and accessibility.

#### 3.3 Reliability
Outline reliability and availability requirements, including error handling and fault tolerance.

#### 3.4 Security
Describe security requirements, including data protection and access control.

### 4. System Architecture

#### 4.1 High-Level Design
Provide a high-level overview of the system architecture.

#### 4.2 Class Diagram
Include a class diagram depicting the relationships between major classes in the system.

### 5. Data Requirements

#### 5.1 Data Sources
Identify the sources of data and their formats.

#### 5.2 Database Design
Describe the database structure and relationships.

### 6. Assumptions and Constraints

#### 6.1 Assumptions
List any assumptions made during the requirements gathering process.

#### 6.2 Constraints
Highlight any constraints that may impact the development process.

### 7. Sign-off

#### 7.1 Approval
Obtain approval from relevant stakeholders.

- **Project Manager:** [Name]
- **Development Team Lead:** [Name]
- **Client Representative:** [Name]