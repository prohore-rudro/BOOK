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
	name_list_t list_directories(option_t); // describe directory hiarhy
	name_list_t list_books(option_t);		// list books with given specifics
	name_list_t list_authors(option_t);		// list authors 
	
	serial_t search_directory(name_t);		// fetch serial for directory if exists
	serial_t search_book(name_t);			// fetch serial for book if exists
	serial_t search_author(name_t);			// fetch serial for author if exists
	
	error_t insert_book(name_t);
	
	error_t delete_book(name_t);
	error_t delete_book(serial_t);
	error_t edit_book(name_t);
	error_t edit_book(serial_t);
	
	error_t insert_directory(option_t);
	error_t marge_directory(option_t);
};

#endif // DBASE_H
