#ifndef _DISCORD_CHANNEL_HXX
#define _DISCORD_CHANNEL_HXX
#include <discord/guild.hxx>
#include <string>
#include <vector>

namespace Discord
{
    class Message;

    class Channel
    {
    public:
        Channel(std::string, std::string, std::string);
        std::string& ID;
        std::string& name;
        std::string& type;
        Guild& guild;

        std::vector<Message> FetchMessages(int count);
    private:
        std::string m_ID;
        std::string m_Name;
        std::string m_Type;
        Guild m_Guild;
    };
}

#endif