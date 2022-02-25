#include <client/client.hxx>
#include <iostream>

namespace Discord
{
    Client::Client(std::string token)
        :m_User(User(token, "\0")), user(m_User)
    {
        
    }

    Client::~Client()
    {
    }

    void Client::Login()
    {
        m_User.init_data();
    }
}