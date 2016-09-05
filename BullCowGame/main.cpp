#include <iostream>
#include <string>

void PrintIntro();
std::string GetGuessAndPrintBack();

int main()
{
	PrintIntro();

	GetGuessAndPrintBack();
	GetGuessAndPrintBack();

	return 0;
}

void PrintIntro() {
	// introduce the game
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game." << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n" << std::endl;
	return;
}

std::string GetGuessAndPrintBack() {
	// get a guess from the player
	std::cout << "Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);

	// print the guess back to the player
	std::cout << "Your guess was: " << Guess << std::endl;
	return Guess;
}