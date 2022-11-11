/* vending.h  Module 5.9 */
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Snack
{
public:
	Snack(string, int, float);
	Snack(string, int);
	Snack(string);

	~Snack();
	
	string getTitle() const;
	void setTitle(string);

	int getCalories() const;
	void setCalories(int);

	float getPrice() const;
	void setPrice(float);
	
private:
	string title;
	int calories;
	float price;
};

class SnackSlot
{
public:
	SnackSlot(int, int);
	SnackSlot(int);

	~SnackSlot();

	int getNumberCells() const;
	void setNumberCells(int);

	int getFilledCells() const;
	void setFilledCells(int);

	int getEmptyCellsCount() const;
	void setEmptyCellsCount(int);

	void addSnack(Snack*);

private:
	int numberCells;
	int filledCells = 0;
};

class VendingMachine
{
public:
	VendingMachine(int, int);
	VendingMachine(int);

	~VendingMachine();
	
	int getNumberSlots() const;
	void setNumberSlots(int);

	int getFilledSlots() const;
	void setFilledSlots(int);
	
	int getEmptySlotsCount() const;
	void setEmptySlotsCount(int);

	void addSlot(SnackSlot*);

private:
	int numberSlots;
	int filledSlots = 0;
};
