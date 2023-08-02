#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    cout << "Stopwatch" << endl;

    // Start the stopwatch
    cout << "Press Enter to start the stopwatch...";
    cin.ignore();

    auto start_time = chrono::high_resolution_clock::now();

    // Stop the stopwatch
    cout << "Press Enter to stop the stopwatch...";
    cin.ignore();

    auto end_time = chrono::high_resolution_clock::now();

    // Calculate the elapsed time
    chrono::duration<double> elapsed_seconds = end_time - start_time;
    double elapsed_time = elapsed_seconds.count();

    cout << "Elapsed Time: " << elapsed_time << " seconds" << endl;

    return 0;
}
