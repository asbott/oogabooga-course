

//		Caveman programming 2: Simple Memory Xform
	
	// One line comment
	
	/*
		Multi-line block comment
	*/

/*
	- The stack
	- Scopes
	- Variables
	- Base types
	- Transforming scope variables (stack memory)
		- Setting memory
		- Basic arithmetic operations
		- Bit operations
	- Breakpoint, step & view memory in debugger
	- (Disassembler)
	- Printing variables
*/

int entry(int argc, char **argv) {

	/*
		The four base types:
		
		Integers (u8, u16, u32, u64, s8, s16, s32, s64)
		Real numbers (float32, float64)
		Strings/text (string)
		Booleans (bool)
	
	*/
	
	bool my_boolean = false;
	string my_text = STR("Ooga, Booga!");
	
	print("My boolean is: %b, my_text is: %s\n", my_boolean, my_text);
	

	return 0;
}