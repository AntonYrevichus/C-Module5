#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Snack
{
private:
	string _label;

public:
	~Snack() = default;

	Snack(string label) :_label(label){}

	void setSnack(string label);

	void getSnack();
};


class SnackSlot {
private:
	int _SnackCount = 0;
	string _name;

public:
	SnackSlot(string name):_name(name){}

	~SnackSlot()=default;

	void getSnackSlot();
	void setAddSnack(vector<Snack>Snack);

	void setDelSnack(vector<Snack>Snack);

};


class VendingMachine {
private:
	int _SlotEmpty = 0;
	int SlotFilled = 0;

public:
	~VendingMachine() = default;
	VendingMachine(int slotcount) :_SlotEmpty(slotcount) {}
	void getSlotCount();
	void setAddSlot(vector<SnackSlot>slot);
	void setDelSlot(vector<SnackSlot>slot);
};