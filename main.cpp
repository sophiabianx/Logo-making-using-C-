#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

// Function to print text slowly (typing effect)
void printAnimated(string text, int delay = 30) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
    cout << endl;
}

int main() {
    // Colors (256-color ANSI escape codes)
    string pink      = "\033[38;5;205m"; // bright pink
    string lightPink = "\033[38;5;218m"; // light pink
    string reset     = "\033[0m";        // reset

    // Logo text (ASCII art)
    string logo[] = {
        "██╗██╗  ██╗ █████╗ ███╗   ██╗ ██████╗ ",
        "██║██║  ██║██╔══██╗████╗  ██║██╔═══██╗",
        "██║██║  ██║███████║██╔██╗ ██║██║ ██║",
        "██║ ╚███╔═╝██╔══██║██║╚██╗██║██║   ██║",
        "██║  ███║  ██║  ██║██║ ╚████║╚██████╔╝",
        "╚═╝  ╚══╝  ╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝ "
    };

    // Cute ASCII art character
    string mascot[] = {
        "               ＿＿",
        "　　　       /＞　 フ",
        "　　　 　   |　_　_|",
        "　 　　　 ／` ミ_wノ",
        "　　 　  /　　　  |",
        "　　　   /　ヽ　  ﾉ",
        "　 　   │　 |　|　|",
        "　  ／￣|　 |　|　|",
        "    | (￣ヽ_ヽ_)__)",
        "  　＼二つ"
    };

    cout << "\n";
    // Print logo with pink/light pink animation
    for (int i = 0; i < 6; i++) {
        cout << ((i % 2 == 0) ? pink : lightPink);
        printAnimated(logo[i], 5);
        cout << reset;
    }

    cout << "\n";
    // Print mascot art in light pink
    for (int i = 0; i < 10; i++) {
        cout << lightPink;
        printAnimated(mascot[i], 5);
        cout << reset;
    }

    cout << "\n";

    cout << "\n";
    return 0;

}
