#include <client/client.hxx>
#include <vector>
#include <string>

int main(int argc, char* argv[])
{
    extern void BotMain(std::vector<std::string> args);
    std::vector<std::string> args;
    args.assign(argv, argv + argc);
    BotMain(args);
    return 0;
}