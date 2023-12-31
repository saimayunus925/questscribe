//
// Created by Saima Yunus on 12/30/23.
//

#ifndef QUESTSCRIBE_GAMEITEM_H
#define QUESTSCRIBE_GAMEITEM_H

#include <iostream>
#include <string>
#include <vector>
using std::string, std::vector;

enum ItemType { weapon, armor, consumable, potion }; // C++ enum for different item types
enum ItemRarity { common, rare, legendary }; // C++ enum for different rarity levels of an item

class GameItem {
    protected:
        string item_name; // The name of the item
        string item_description; // A brief description of the item's purpose or effects
        enum ItemType item_type; // Categorization of the item (e.g., weapon, armor, consumable)
        enum ItemRarity item_rarity; // The rarity level of the item (e.g., common, rare, legendary)
        double item_value; // The in-game value or cost of the item
        double item_weight; // The weight of the item
        double durability; // The durability of the item, for items that degrade over time or with use
        vector<string> effects; // Any special effects or bonuses conferred by the item
    public:
};

#endif //QUESTSCRIBE_GAMEITEM_H
