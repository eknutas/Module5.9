/* main.c Module 5.9 */
#include "vending.h"

int main()
{
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	Snack* milkyWay = new Snack("Milky Way");
	Snack* mars = new Snack("Mars");
	Snack* twix = new Snack("Twix");
	int numberCells;
	cout << "Enter the number of cells ";
	cin >> numberCells;
	SnackSlot* slot = new SnackSlot(numberCells);
	slot->addSnack(bounty);
	slot->addSnack(snickers);
	slot->addSnack(milkyWay);
	slot->addSnack(mars);
	slot->addSnack(twix);
	int numberSlots;
	cout << "Enter the number of slots ";
	cin >> numberSlots;
	VendingMachine* machine = new VendingMachine(numberSlots);
	machine->addSlot(slot);

	cout << "Empty cells " << slot->getEmptyCellsCount() << endl;
	cout << "Empty slots " << machine->getEmptySlotsCount() << endl;
	delete machine;
	delete slot;
	delete snickers;
	delete milkyWay;
	delete bounty;
	delete mars;
	delete twix;

	return 0;
}
