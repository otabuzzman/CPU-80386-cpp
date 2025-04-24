#include <iostream>
#include <thread>
#include <chrono>
#include "ring.h"

void producer(RingBuffer<int>& rb) {
    int value = 0;
    while (true) {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        rb.push(value);
        std::cout << "[Producer] Pushed: " << value << "\n";
        ++value;
    }
}

int main() {
    RingBuffer<int> buffer(5);

    std::thread prod(producer, std::ref(buffer));

    std::cout << "Drücke die Eingabetaste (CR), um einen Wert aus dem Puffer zu lesen...\n";
    while (true) {
        std::cin.get(); // wartet auf CR
        int value = buffer.pop();
        std::cout << "[Main] Gelesen: " << value << "\n";
    }

    prod.join(); // wird niemals erreicht
    return 0;
}
