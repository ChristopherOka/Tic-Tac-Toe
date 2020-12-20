#include <iostream>
#include <vector>

void x_move(std::vector<std::string>& board) {
	//PURPOSE: Takes in X's move, and places an X where the player desires
	//INPUTS: The vector "board" is passed by reference
	//OUTPUTS: The vector "board" is altered to be O's move
	int x_placement;
	std::cout << "X's turn! Enter the number where you'd like to place your X.\n";
try_again:
	std::cout << "X: ";
	std::cin >> x_placement;
	if (x_placement > 16 || x_placement < 1) { //valid range checker
		std::cout << "Enter a valid number.\n";
		goto try_again; //jumps back to the start to allow the player to re-input a number
	}

	switch (x_placement) {//places an 'X' at the location the player inputs
	case 1:
		if (board[0] == "X" || board[0] == "O") { //error checker for a pre-existing X or O in that selected tile
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[0] = "X"; //sets the selected location to X
		break;
	case 2:
		if (board[1] == "X" || board[1] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[1] = "X";
		break;
	case 3:
		if (board[2] == "X" || board[2] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[2] = "X";
		break;
	case 4:
		if (board[3] == "X" || board[3] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[3] = "X";
		break;
	case 5:
		if (board[4] == "X" || board[4] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[4] = "X";
		break;
	case 6:
		if (board[5] == "X" || board[5] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[5] = "X";
		break;
	case 7:
		if (board[6] == "X" || board[6] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[6] = "X";
		break;
	case 8:
		if (board[7] == "X" || board[7] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[7] = "X";
		break;
	case 9:
		if (board[8] == "X" || board[8] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[8] = "X";
		break;
	case 10:
		if (board[9] == "X" || board[9] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[9] = "X";
		break;
	case 11:
		if (board[10] == "X" || board[10] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[10] = "X";
		break;
	case 12:
		if (board[11] == "X" || board[11] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[11] = "X";
		break;
	case 13:
		if (board[12] == "X" || board[12] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[12] = "X";
		break;
	case 14:
		if (board[13] == "X" || board[13] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[13] = "X";
		break;
	case 15:
		if (board[14] == "X" || board[14] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[14] = "X";
		break;
	case 16:
		if (board[15] == "X" || board[15] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[15] = "X";
		break;
	default:
		break;
	}

}

void o_move(std::vector<std::string>& board) { 
	//PURPOSE: Takes in O's move, and places an O where the player desires
	//INPUTS: The vector "board" is passed by reference
	//OUTPUTS: The vector "board" is altered to be O's move
	int o_placement;
	std::cout << "O's Turn! Enter the number where you'd like to place your O.\n";
try_again:
	std::cout << "O: ";
	std::cin >> o_placement;
	if (o_placement > 16 || o_placement < 1) { //valid range checker
		std::cout << "Enter a valid number.\n";
		goto try_again; //jumps back to the start
	}

	switch (o_placement) {
	case 1:
		if (board[0] == "X" || board[0] == "O") { //checks if there is a pre-existing X or O on that selected tile
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[0] = "O";
		break;
	case 2:
		if (board[1] == "X" || board[1] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[1] = "O";
		break;
	case 3:
		if (board[2] == "X" || board[2] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[2] = "O";
		break;
	case 4:
		if (board[3] == "X" || board[3] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[3] = "O";
		break;
	case 5:
		if (board[4] == "X" || board[4] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[4] = "O";
		break;
	case 6:
		if (board[5] == "X" || board[5] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[5] = "O";
		break;
	case 7:
		if (board[6] == "X" || board[6] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[6] = "O";
		break;
	case 8:
		if (board[7] == "X" || board[7] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[7] = "O";
		break;
	case 9:
		if (board[8] == "X" || board[8] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[8] = "O";
		break;
	case 10:
		if (board[9] == "X" || board[9] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[9] = "O";
		break;
	case 11:
		if (board[10] == "X" || board[10] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[10] = "O";
		break;
	case 12:
		if (board[11] == "X" || board[11] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[11] = "O";
		break;
	case 13:
		if (board[12] == "X" || board[12] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[12] = "O";
		break;
	case 14:
		if (board[13] == "X" || board[13] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[13] = "O";
		break;
	case 15:
		if (board[14] == "X" || board[14] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[14] = "O";
		break;
	case 16:
		if (board[15] == "X" || board[15] == "O") {
			std::cout << "Invalid Move. Try again.\n";
			goto try_again;
		}
		board[15] = "O";
		break;
	default:
		break;
	}
}

void win_checker(std::vector<std::string>& board, bool& win, int& score) {
	//PURPOSE: Check if there are 4 X's or 4 O's in a staight vertical, diagonal or horizontal line
	//INPUTS: The board vector is passed in by reference and the boolean win and int score variable is also passed in by reference
	//OUTPUTS: The win value is either unchanged at the end of the function, or is changed
	bool win_left = false; 
	bool win_right = false;
	for (int i = 0; i < 4; i++) { //repeats 4 times, once for each row/column
		if ((board[i] == board[i + 1]) && (board[i + 1] == board[i + 2]) && (board[i + 2] == board[i + 3])) { //row checker
			win = true;
		}
		if (((board[i] == board[i + 4]) && (board[i + 4] == board[i + 8])) && (board[i + 8] == board[i + 12])) {//column checker
			win = true;
		}
		if (((board[0] == board[5]) && (board[5] == board[10])) && (board[10] == board[15])) { //top left to bottom right diagonal checker
			win_left = true;
		}
		if (((board[3] == board[6]) && (board[6] == board[9])) && (board[9] == board[12])) { //top right to bottom left diagonal checker
			win_right = true;
		}
		if (win) {
			std::cout << (board[i] == "X" ? "X wins!\n" : "O wins!\n"); //prints whoever won
			score++;
			break;
		}
		if (win_left) {
			std::cout << (board[0] == "X" ? "X wins!\n" : "O wins!\n");
			score++;
			win = true; 
			break;
		}
		if (win_right) {
			std::cout << (board[3] == "X" ? "X wins!\n" : "O wins!\n");
			score++;
			win = true;
			break;
		}
	}
}

void game_board(std::vector<std::string>& board) {
	//PURPOSE: Print the tic tac toe game board
	//INPUTS: The board vector is passed in by reference
	//OUTPUTS: Nothing is outputted
	std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  |  " << board[3] << "\n"
		<< "----------------------\n"
		<< "  " << board[4] << "  |  " << board[5] << "  |  " << board[6] << "  |  " << board[7] << "\n"
		<< "----------------------\n"
		<< "  " << board[8] << "  |  " << board[9] << " |  " << board[10] << " |  " << board[11] << "\n"
		<< "----------------------\n"
		<< "  " << board[12] << " |  " << board[13] << " |  " << board[14] << " |  " << board[15] << "\n";
}

void tic_tac_toe() {
	//PURPOSE: Call the x_move, o_move, game_board and win_checker functions to play the game of tic tac toe, as well as set up the game board vector
	//INPUTS: Nothing is inputted into this function
	//OUTPUTS: Nothing is outputted from this function
	std::cout << "Welcome to tic tac toe!\n";
	int x_score = 0;
	int o_score = 0;
	int ties = 0;
	char again = 'y';
	while (again == 'y') {
		std::vector<std::string> board = { "1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16" };
		bool win = false;
		game_board(board);
		for (int i = 0; i < 8 && win == false;i++) {
			x_move(board);
			game_board(board);
			win_checker(board, win, x_score);
			if (win) {
				break;
			}
			o_move(board);
			game_board(board);
			win_checker(board, win, o_score);
		}
		if (win == false) {
			std::cout << "It's a tie!\n";
			ties++;
		}
		std::cout << "Good game!\n";
		std::cout << "Would you like to play again (y/n)?\n";
		std::cin >> again;
		if (again == 'y') {
			std::vector<std::string> board = { "1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16" };
			bool win = false;
			game_board(board);
			for (int i = 0; i < 8 && win == false;i++) {
				o_move(board);
				game_board(board);
				win_checker(board, win, x_score);
				if (win) {
					break;
				}
				x_move(board);
				game_board(board);
				win_checker(board, win, o_score);
			}
			if (win == false) {
				std::cout << "It's a tie!\n";
				ties++;
			}
			std::cout << "Good game!\n";
			std::cout << "Would you like to play again (y/n)?\n";
			std::cin >> again;
		}
	}
	std::cout << "X's Score: " << x_score << "\nO's Score: " << o_score << "\nTies: " << ties << "\n";
	std::cout << "Goodbye!\n";
	}

int main() {
	tic_tac_toe();
}
