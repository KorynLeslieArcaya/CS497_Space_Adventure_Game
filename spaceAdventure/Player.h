#ifndef PLAYER_H 
#define PLAYER_H
#include <string>
#include <vector> 
#include "Action.h"
#include "Area.h"
#include "Item.h"

using std::vector; 

class Player 
{
private: 
	vector<Item*> inventory;  
	Area* location; 
	double lifeRemaining; 
	double gasRemaining; 

public: 
	Player(double life, double gas); 
	bool drop(std::string targetName); 
	bool take(std::string targetName); 
	Area* getLocation(); 
	void setLocation(Area* anArea); 
	void listInventory(); 
	bool lookAt(std::string targetName); 
	double getLife(){ return lifeRemaining;} 
	double getGas(){ return gasRemaining;}
	void getPlayer();
	std::vector<Item*> getPlayerInventory();
	//When user chooses to "load game" adds an item object
	void initializeInventory(std::vector<Item*> toAdd);	
	
}; 

#endif
