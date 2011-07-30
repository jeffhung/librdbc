#ifndef RDBC_SESSION_HPP_INCLUDED
#define RDBC_SESSION_HPP_INCLUDED

namespace rdbc {

/**
 * The session class represent a binding to backend database engine.
 *
 * @note Usually, we do not need to create session by our self, since
 *       rdbc::manager will handle session pooling for us. However, this class
 *       exists in case we need to create a separate session explicitly.
 */
class session
{
public:

}; // class rdbc::session

} // naemspace rdbc

#endif /* RDBC_SESSION_HPP_INCLUDED */

