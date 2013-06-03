#include <SFML/System.hpp>
#include <iostream>

using namespace std;


/*!
 * \brief No prostě main.. zatim tu nic neni.
 * \return 0
 */
int main()
{
    sf::Clock Clock;
    while (Clock.GetElapsedTime() < 5.f)
    {
        std::cout << Clock.GetElapsedTime() << std::endl;
        sf::Sleep(0.5f);
    }

    return 0;
}
