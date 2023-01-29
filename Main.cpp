#include "Snack.h"
#include <iostream>


using namespace std;

int main() {

	VendingMachine* machine = new VendingMachine(20);
	
	SnackSlot* slot = new SnackSlot{ "first" };

	Snack* snack = new Snack{"Twix"};
	
	
	slot->setAddSnack({ Snack{"Snikers"}, Snack{ "Bounty"} });
	slot->getSnackSlot();
	slot->setAddSnack({ Snack{"Snikers"}, Snack{ "Bounty"}, Snack{ "Bounty"}, Snack{ "Snikers"}, Snack{ "Bounty"}, Snack{ "Bounty"}, Snack{ "Bounty"} });
	slot->setDelSnack({ Snack{"Snikers"}, Snack{ "Bounty"} });
	slot->getSnackSlot(); 

	
	machine->getSlotCount(); //Get number of full and empty slots

	machine->setAddSlot({ SnackSlot{"slot1"} ,SnackSlot{"slot2"}, SnackSlot("slot3")});
	machine->getSlotCount();

	delete machine;
	delete slot;
	delete snack;
	
	
	
}