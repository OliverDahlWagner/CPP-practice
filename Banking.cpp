#include <iomanip>
#include <iostream>
#include <limits>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0;
    int choice = 0;

    do {
        std::cout << "*******************\n";
        std::cout << "*******************\n";
        std::cout << "Enter your choice: \n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";

        std::cin >> choice;
        // Check if input is invalid     now in default case
        // if (std::cin.fail())
        // {
        //     std::cin.clear(); // Clear the error flag
        //     std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
        //     '\n'); // Discard invalid input std::cout << "Invalid input!
        //     Please enter a number between 1 and 4.\n"; continue; // Restart
        //     the loop
        // }

        // works with or without
        std::cin.clear();
        fflush(stdin);
        // ---

        if (choice / choice != 1) {
            choice = 4;
        }

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thanks for visting!\n";
                break;
            default:
                std::cout << "Invalid Choice!\n";
                std::cin.clear();
                std::cin.ignore(1000, '\n');
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    std::cout << "Your balance is: " << std::setprecision(2) << std::fixed
              << balance << "$\n";
}

double deposit() {
    double amount = 0;

    std::cout << "Enter amount for deposit: ";
    std::cin >> amount;

    if (amount > 0) {
        return amount;
    } else {
        std::cout << "That is not a valid amount! \n";
        return 0;
    }
}

double withdraw(double balance) {
    double amount = 0;

    std::cout << "Enter amount for withdraw: ";
    std::cin >> amount;

    if (amount > balance) {
        std::cout << "Insuffiencent funds! \n";
        return 0;
    } else if (amount < 0) {
        std::cout << "Nope cant do that shit! \n";
        return 0;
    } else {
        return amount;
    }
}

// rock paper scissor