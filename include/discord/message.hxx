#ifndef _DISCORD_MESSAGE_HXX
#define _DISCORD_MESSAGE_HXX

namespace Discord
{
    class Embed;

    class Message
    {
    public:
        Message(const std::string& content="\0", const std::vector<Embed>* embeds = nullptr);

    private:
        std::string 
        std::string m_Content;
    };
}

#endif