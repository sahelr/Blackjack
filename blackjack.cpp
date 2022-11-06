/*
This program replicates a classic game of Blackjack, or Twenty-One.
The user will face against an AI, which has randomly chosen cards, in hope of winning.
The user can decide to start a new match or stop, effectively ending the program.
*/
#include <iostream>
#include <string>
#include <vector>
std::vector<std::string> cards; // Where the cards will be stored. Suit doesn't matter in blackjack so we'll omit it.
int main() {
    int current = 0;
    while(current < 4) {
        cards.push_back("2");
        cards.push_back("3");
        cards.push_back("4");
        cards.push_back("5");
        cards.push_back("6");
        cards.push_back("7");
        cards.push_back("8");
        cards.push_back("9");
        cards.push_back("10");
        cards.push_back("J");
        cards.push_back("Q");
        cards.push_back("K");
        cards.push_back("A");
    }
}
int sum() {

}