#include "Snack.h"
#include <iostream>
#include <vector>

void Snack::setSnack(string label) {
	_label = label;
}

void Snack::getSnack() {
	cout << _label;
}




void SnackSlot::getSnackSlot() {
	cout << "Total Snacks in slot: " << _SnackCount << endl;
}

void SnackSlot::setAddSnack(vector<Snack>snack) {

	cout << "Add numbers of Snacks= " << snack.size() << endl;
	_SnackCount += snack.size();
	if (_SnackCount > 50) {
		cout << "Error slot is full" << endl;
	}
}

void SnackSlot::setDelSnack(vector<Snack>snack) {
	cout << "Delete numbers of Snacks= " << snack.size() << endl;
	_SnackCount -= snack.size();
}




void VendingMachine::getSlotCount() {
	cout<<"Numbers of full slot in machine are "<< SlotFilled <<endl;
	cout << "Numbers of empty slot in machine are " << _SlotEmpty << endl;
}
void VendingMachine::setAddSlot(vector<SnackSlot>slot) {
	SlotFilled += slot.size();
	_SlotEmpty -= slot.size();
}
void VendingMachine::setDelSlot(vector<SnackSlot>slot) {
	_SlotEmpty += slot.size();
	SlotFilled -= slot.size();
}