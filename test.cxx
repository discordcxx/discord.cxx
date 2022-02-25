#include <client/client.hxx>
#include <iostream>
#include <vector>
#include <string>

using namespace Discord;
void BotMain(std::vector<std::string> args)
{
    Client my_bot = Client("bot token");
    my_bot.Login();
    std::cout << my_bot.user.token << std::endl;
}