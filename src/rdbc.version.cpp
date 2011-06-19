#include <rdbc/version.hpp>

namespace rdbc {

version_t g_version = {
	RDBC_VERSION_MAJOR,
	RDBC_VERSION_MINOR,
	RDBC_VERSION_MICRO,
	RDBC_VERSION_BUILD,
};

version_t version()
{
	return g_version;
}

} // namespace rdbc
