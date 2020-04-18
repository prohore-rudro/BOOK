/* Dbase Class - MAIN class */

#ifndef DBASE_H
#define DBASE_H

class book::Dbase{
private:

public:
	Dbase();
	~Dbase();

	/* CLI INTERFACE */
	error_t load_library(path_t);	// load library from given path 

	/* queries */
	name_list_t list_directories(option_t);
	name_list_t list_books(option_t);
	name_list_t list_authors(option_t);

};

#endif // DBASE_H