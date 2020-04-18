/*  INCLUDE IN MAIN */

#ifndef FPATH_H
#define FPATH_H

/*  IO  */
#include <iostream>

/*  STL  */
#include <string>
#include <vector>i
#include <array>

/*  Global namespace for project */
namespace fpath{
    /*  Depended Classes*/
    /*  These are defined in separate header files*/
    class Directory;

    /*  Constant Declarations */
    const std::size_t AVAIL_ERR=2; // number of available errors

    /*  Type Declarations */
    using file_t = std::string; // name of files
    using name_t = std::string; // name of any kind

    using serial_t = int32_t;   // id of elements
    using error_t = int32_t;    // error number
    using cnt_t = int32_t;      // count of files
    
    using error_list_t = std::array<std::string, AVAIL_ERR>; // list of error messages

    /*  ERROR LIST */
    error_list_t error_list;
    error_list[0] = "OPERATION SUCCESSFULL";
    error_list[1] = "FAILED EXECUTION";

    class Fpath{
        
    };
}

#endif // FPATH
