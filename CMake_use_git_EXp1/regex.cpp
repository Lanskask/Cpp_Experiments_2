#include "boost/regex.hpp"
#include "boost/version.hpp"
#include <iostream>

int main(int argc, char **argv) {	
	static const std::string regex("YOUR_REGEX");
	static const std::string str("foo");

	std::cerr << std::endl << "Boost Version = " << BOOST_VERSION << std::endl;
	std::cerr << std::endl << "Regex = " << regex << std::endl;
	std::cerr << std::endl << "Search string = " << str << std::endl << std::endl;

	try {
		static const boost::regex e(regex);
		std::cerr << "Match result = " << boost::regex_match("foo", e ) << std::endl;
	} catch (boost::regex_error const & ex) {
		std::cerr << "exception = " << ex.what() << std::endl;
	} catch (...) {
		std::cerr << "unknown exception" << std::endl;
	}

	return 0;
}

