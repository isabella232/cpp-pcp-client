#include <cpp-pcp-client/protocol/v1/serialization.hpp>

#if _WIN32
#include <Winsock2.h>
#else
#include <netinet/in.h>  // endianess functions: htonl, ntohl
#endif

namespace PCPClient {
namespace v1 {

#ifdef BOOST_ENDIAN_LITTLE_BYTE

uint32_t getNetworkNumber(const uint32_t& number)
{
    return htonl(number);
}

uint32_t getHostNumber(const uint32_t& number)
{
    return ntohl(number);
}

#endif  // BOOST_ENDIAN_LITTLE_BYTE

}  // namespace v1
}  // namespace PCPClient
