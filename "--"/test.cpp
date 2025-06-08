#include <chrono>
auto start = chrono::high_resolution_clock::now();

// your code here

auto end = chrono::high_resolution_clock::now();
chrono::duration<double> diff = end - start;
cout << "Execution time: " << diff.count() << " s\n";
