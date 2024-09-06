#include <iostream>
#include <vector>
#include <iomanip>

void printDescription(const std::vector<std::vector<double>>& TechnicalDescriptions) {
    for (const auto& i : TechnicalDescriptions) {
        int corner = static_cast<int>(i[0]);
        int direction = static_cast<int>(i[1]);
        int degree = static_cast<int>(i[2]);
        int minute = static_cast<int>(i[3]);
        int second = static_cast<int>(i[4]);
        double distance = i[5];

        std::cout << std::fixed << std::setprecision(2);

        switch (direction) {
            case 9: // North East
                std::cout << corner << "  N " << degree << "°" << minute << "\' " << second << "\" E  " 
                          << distance << " M." << std::endl;
                break;
            case 8: // North
                std::cout << corner << "  Due North  " << distance << " M." << std::endl;
                break;
            case 7: // North West
                std::cout << corner << "  N " << degree << "°" << minute << "\' " << second << "\" W  " 
                          << distance << " M." << std::endl;
                break;
            case 6: // East
                std::cout << corner << "  Due East  " << distance << " M." << std::endl;
                break;
            case 4: // West
                std::cout << corner << "  Due West  " << distance << " M." << std::endl;
                break;
            case 3: // South East
                std::cout << corner << "  S " << degree << "°" << minute << "\' " << second << "\" E  " 
                          << distance << " M." << std::endl;
                break;
            case 2: // South
                std::cout << corner << "  Due South  " << distance << " M." << std::endl;
                break;
            case 1: // South West
                std::cout << corner << "  S " << degree << "°" << minute << "\' " << second << "\" W  " 
                          << distance << " M." << std::endl;
                break;
            default:
                std::cout << "Invalid direction" << std::endl;
        }
    }
}

int main() {
    std::vector<std::vector<double>> lotdata = {
        {0, 9, 74, 8, 0, 1011.86},
        {1, 3, 21, 5, 0, 4.10},
        {2, 1, 67, 23, 0, 9.75},
        {3, 7, 21, 5, 0, 4.10},
        {4, 9, 67, 23, 0, 9.75}
    };

    printDescription(lotdata);

    return 0;
}
