#include <iostream>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

int main() {

    fs::path filePath = "example.txt";

    cout << "The destination of the file is: " << fs::absolute(filePath) << endl;

    return 0;
}