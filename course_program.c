

//		Caveman programming 4: Reusing Code


/*
	- Duplication of logic
	- Functions
		- Parameters/arguments
		- Return value
	- Duplications of memory patterns
	- Structures (combined data represantations)
	- Macros
*/



float32 get_user_input_float32(string prompt) {
	
	float32 result;
	string input;
	
	bool success = false;
	while (!success) {
		print("%s > ", prompt);
		os_wait_and_read_stdin(&input, 1024, get_heap_allocator());
		result = string_to_float(input, &success);
		if (!success) {
			print("That was not a valid number, please try again!\n");
		}
	}
	
	return result;
}

typedef struct Item_Data {
	string  name;
	float32 damage;
	float32 durability;
	float32 level;
} Item_Data;

Item_Data get_user_input_item() {
	Item_Data item;

	print("Please enter item name > ");
	os_wait_and_read_stdin(&item.name, 1024, get_heap_allocator());
	
	string input;
	
	item.damage     = get_user_input_float32(STR("Please enter item damage"));
	item.durability = get_user_input_float32(STR("Please enter item durability"));
	item.level      = get_user_input_float32(STR("Please enter item level"));
	
	return item;
}

void print_item(Item_Data item) {
	print("Item name is:       %s\n", item.name);
	print("Item damage is:     %f\n", item.damage);
	print("Item durability is: %f\n", item.durability);
	print("Item level is:      %f\n", item.level);
}

int entry(int argc, char **argv) {
	
	Item_Data item1;
	Item_Data item2;
	Item_Data item3;
	Item_Data item4;
	
	item1 = get_user_input_item();
	item2 = get_user_input_item();
	item3 = get_user_input_item();
	item4 = get_user_input_item();
	
	print_item(item1);
	print_item(item2);
	print_item(item3);
	print_item(item4);

	return 0;
}