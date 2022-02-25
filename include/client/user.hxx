#ifndef _CLIENT_USER_HXX
#define _CLIENT_USER_HXX
#include <string>

namespace Discord
{
    class Client;

    class User
    {
    public:
        User(std::string token, std::string clientID);
        std::string& token;
        std::string& ID;
        friend class Client;
    private:
        void init_data();

        std::string m_Token;
        std::string m_ID;
        bool m_Is_bot;
    };
}
#endif