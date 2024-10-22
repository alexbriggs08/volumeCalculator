#include <iostream>

double getUserMetrics (const std::string& prompt);

int main() {

    double height { getUserMetrics("height") };
    double width { getUserMetrics("width") };
    double length { getUserMetrics("length") };

    std::cout << height * width * length << " is your volume! \n";

    return 0;
}
