======
README
======

History
=======

I've written relational database abstraction layers in C++ two times, the
2nd implementation is a rewritten of the 1st to fix some fundemental
design flaws, such as better interface design for transaction support.
I wrote them because I'm not satisfied on all current available
implementations, in both propritary and open source fields.

These two implementations I did, are for my previous job. Hence I don't
own them and can't open source them. However, I do have some ideas to
further improve the 2nd implementation. So, it might be good to rewrite
again to try to finish the journey to come out a perfect relational
database abstraction layer.

Features
========

Below are the planned features:

* no session
* explicit/forced transaction
* relational database backend
  * runtime pluggable
  * plug on-demand
  * mysql, pgsql, sqlite, odbc

