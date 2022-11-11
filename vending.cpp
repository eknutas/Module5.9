/* vending.c  Module 5.9 */
#include "vending.h"

Snack::Snack(string title, int calories, float price)
{
	this->title = title;
	this->calories = calories;
	this->price = price;
}

Snack::Snack(string title, int calories)
{
	this->title = title;
	this->calories = calories;
}

Snack::Snack(string title)
{
	this->title = title;
}

Snack::~Snack()
{
}

string Snack::getTitle() const
{
	return title;
}

void Snack::setTitle(string)
{
}

int Snack::getCalories() const
{
	return calories;
}

void Snack::setCalories(int)
{
}

float Snack::getPrice() const
{
	return price;
}

void Snack::setPrice(float)
{
}

SnackSlot::SnackSlot(int numberCells, int filledCells)
{
	this->numberCells = numberCells;
	this->filledCells = filledCells;
}

SnackSlot::SnackSlot(int numberCells)
{
	this->numberCells = numberCells;
}

SnackSlot::~SnackSlot()
{
}

int SnackSlot::getNumberCells() const
{
	return numberCells;
}

void SnackSlot::setNumberCells(int)
{
}

int SnackSlot::getFilledCells() const
{
	return filledCells;
}

void SnackSlot::setFilledCells(int)
{
}

int SnackSlot::getEmptyCellsCount() const
{
	int emptyCells = numberCells - filledCells;
	if (emptyCells < 0)
	{
		cout << "Not enough cells!" << endl;
		emptyCells = 0;
	}
	return emptyCells;
}

void SnackSlot::setEmptyCellsCount(int)
{
}

void SnackSlot::addSnack(Snack* snack)
{
	++filledCells;
}

VendingMachine::VendingMachine(int numberSlots, int filledSlots)
{
	this->numberSlots = numberSlots;
	this->filledSlots = filledSlots;
}

VendingMachine::VendingMachine(int numberSlots)
{
	this->numberSlots = numberSlots;
}

VendingMachine::~VendingMachine()
{
}

int VendingMachine::getNumberSlots() const
{
	return numberSlots;
}

void VendingMachine::setNumberSlots(int)
{
}

int VendingMachine::getFilledSlots() const
{
	return filledSlots;
}

void VendingMachine::setFilledSlots(int)
{
}

int VendingMachine::getEmptySlotsCount() const
{
	int emptySlots = numberSlots - filledSlots;
	if (emptySlots < 0)
	{
		cout << "Not enough slots!" << endl;
		emptySlots = 0;
	}
	return emptySlots;
}

void VendingMachine::setEmptySlotsCount(int)
{
}

void VendingMachine::addSlot(SnackSlot* slot)
{
	++filledSlots;
}
