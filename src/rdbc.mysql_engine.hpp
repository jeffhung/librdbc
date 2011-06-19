#ifndef RDBC_MYSQL_ENGINE_HPP_INCLUDED
#define RDBC_MYSQL_ENGINE_HPP_INCLUDED

#include <rdbc/engine.hpp>

namespace rdbc {

struct mysql_engine : public engine
{

	const wchar_t* name() const;

}; // class rdbc::session

} // naemspace rdbc

#endif /* RDBC_MYSQL_ENGINE_HPP_INCLUDED */

