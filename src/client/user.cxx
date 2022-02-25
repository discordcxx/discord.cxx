#include <client/user.hxx>
#include <restc-cpp/restc-cpp.h>
#include <restc-cpp/RequestBuilder.h>
#include <boost/lexical_cast.hpp>
#include <boost/fusion/adapted.hpp>
#include <string>

using namespace restc_cpp;

struct user_response
{
    std::string id;
    std::string username;
    std::string discriminator;
    std::string avatar;
    bool bot;
};

BOOST_FUSION_ADAPT_STRUCT(
    user_response,
    (std::string, id)
    (std::string, username)
    (std::string, discriminator)
    (std::string, avatar)
    (bool, bot)
)

Discord::User::User(std::string token, std::string clientID)
    :m_Token(token), m_ID(clientID), token(m_Token), ID(m_ID)
{
}

void Discord::User::init_data()
{
    auto client = RestClient::Create();
    user_response data_object = client->ProcessWithPromiseT<user_response>([this](Context& ctx)
    {
        user_response res;

        SerializeFromJson(res, RequestBuilder(ctx).Get("https://discord.com/api/v9/users/@me")
                        .Header("Authorization", this->m_Token.c_str()).Execute());

        return res;
    }).get();
    m_ID = data_object.id;
}