

//		Caveman programming 3: Conditional exection


/*
	- Standard input (stdin)
	- Logical operations
	- If statement
	- User selection
	- "while"-loop
	- Selection loops
	- "for"-loop
	- Limited selection loop
	- Opening a window, game loop, exit
*/

int entry(int argc, char **argv) {

	/*
	
		&& - Logical AND
		|| - Logical OR
		
		< > - less than, greater than
		<= >= - less than equals, greater than equals
		
		== - Equivalence?
		!= - Not equivalence?
		
	*/

	window.title = STR("My Epic Game");
	
	bool is_game_running = true;
	
	while (is_game_running && !window.should_close) {
		
		if (is_key_down(KEY_ESCAPE)) {
			is_game_running = false;
		}
		
		os_update();
	}

	return 0;
}