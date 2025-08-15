#include <iostream>
#include <array>
#include <vector>
#include <map>

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    cout << "Welcome to the fortune teller program!" << endl;
    cout << "Please enter your name:" << endl;
    std::string name{};
    cin >> name;
    cout << endl;
    cout << "Please enter the time of year when you were born:" << endl;
    cout << "(pick from 'spring', 'summer', 'autumn', 'winter')" << endl;
    std::string season{};
    cin >> season;
    cout << endl;
    std::array<std::string,2> adjective{};
    cout << "Please enter an adjective:";
    cin >> adjective.at(0);
    cout << endl;
    cout << "Please enter another adjective:";
    cin >> adjective.at(1);
    cout << endl;
    std::map<std::string, std::string> const noun{{"spring","STL guru"},
                                                  {"summer","C++ expert"},
                                                  {"autumn","coding beast"},
                                                  {"winter","software design hero"}
                                                };
    std::vector<std::string> const ending{"eats UB for breakfast",
                                    "finds errors quicker than the compiler",
                                    "is not afraid of C++ error messages"};
    cout << "Here is your description:\n";
    cout << name + ", the " << adjective.at(name.size()%adjective.size()) << " " << noun.at(season) << " that " << ending.at(name.size()%ending.size()) << endl;

    return 0;
}