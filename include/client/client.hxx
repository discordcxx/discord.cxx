#ifndef _CLIENT_CLIENT_HXX
#define _CLIENT_CLIENT_HXX
#include <client/user.hxx>
#include <event/events.hxx>
#include <string>

namespace Discord
{
    using event_fn = void(Event);

    class Client
    {
    public:
        Client(std::string token);
        ~Client();

        void Login();
        void somefunc();

        User& user;
    private:
        User m_User;
    };
}

#endif