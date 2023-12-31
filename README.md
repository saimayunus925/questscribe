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
Personality class, which will be built based on the scientifically-valid [Big 5 personality traits](https://www.psychologytoday.com/us/basics/big-5-personality-traits).
The different character types - Hero, Villain, Antihero, Warrior, Scribe, etc - will be derived classes that inherit from the 
Character base class. As for the Personality class, its private member variables will be scores for each of the Big 5 traits,
which will change based on the events of the game (e.g. if a character becomes more rigid/inflexible, their openness score decreases).

##### 1.2.1 Objective

The primary goal of this project is to develop an object-oriented text-based adventure game, written in C++, with classes to 
represent the various objects and entities in the game.

##### 1.2.2 Inclusions:

* ###### **CHARACTER** class
  * **Attributes**
    * Name (string): The name of the character. 
    * Personality (*Personality* object): The personality traits of the character, represented by a *Personality* object.
    * Level (int): The level or experience of the character. 
    * Health Points (HP) - int: Represents the character's health or life. 
    * Mana (or Energy) Points - int: Represents the character's magical or special abilities. 
    * Attack Damage (int): The amount of damage the character deals. 
    * Defense (int): The ability to resist or reduce incoming damage.
    * Inventory (linked list of *Item* objects): List of items the character is carrying. 
    * Skills/Abilities (linked list of *Ability* objects): List of abilities the character can use.
  * **Methods**
* ###### **PERSONALITY** class (based on the Big 5 methodology for determining personalities)
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
* ###### **GAMEITEM** class
  * **Attributes**
    * Name: The name of the item. 
    * Description: A brief description of the item's purpose or effects. 
    * Type: Categorization of the item (e.g., weapon, armor, consumable). 
    * Rarity: The rarity level of the item (e.g., common, rare, legendary). 
    * Value: The in-game value or cost of the item. 
    * Weight: The weight of the item, influencing inventory management. 
    * Durability: For items that degrade over time or with use. 
    * Effect(s): Any special effects or bonuses conferred by the item.
  * **Methods**
* ###### **COMBATMOVE** class
  * **Attributes**
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