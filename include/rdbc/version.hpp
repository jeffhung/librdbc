#ifndef RDBC_VERSION_HPP_INCLUDED
#define RDBC_VERSION_HPP_INCLUDED

#define RDBC_VERSION_MAJOR (0)
#define RDBC_VERSION_MINOR (1)
#define RDBC_VERSION_MICRO (0)
#define RDBC_VERSION_BUILD (1000)

namespace rdbc {

struct version_t
{
	int major;
	int minor;
	int micro;
	int build;
};

const version_t& version();

} // namespace rdbc

#endif /* RDBC_VERSION_HPP_INCLUDED */

