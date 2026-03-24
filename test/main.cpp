#include <locale>
#include <iostream>
#include <thread>
#include <chrono>
#include "vvmidi/vvmidi.hpp"

using namespace vvmidi;

int main()
{
    std::setlocale(LC_ALL, "en_US.UTF-8");
    MidiOut mo {};
    // Scale<Key{{Letter::C, Accidental::Natural}, Diatonic::Major}> scm{};
    Scale<C_Major> scm{};
    mo.playNote(scm({}), Channel::One, true);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    mo.playNote(scm({}), Channel::One, false);
    std::cout << "按 Enter 键退出...";
    std::cin.get();
    return 0;
}
