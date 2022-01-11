#ifndef SERVER_HPP
#define  SERVER_HPP
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include "Location.hpp"

class Server
{
	std::string					_listen;
	std::string					_host;
	std::string					_client_max_body_size;
	std::string					_root;
	std::vector<std::string>	_server_name;
	std::map<std::string, std::string>	_error_page;
	std::vector<Location>		_location;
	int						_location_open;
	int						_server_open;
	public:
		Server();
		void	Clear();
		// set
		void	set_listen(std::string);
		void	set_host(std::string);
		void	set_root(std::string);
		void	set_client_max_body_size(std::string);
		void	set_server_name(std::vector<std::string>);
		void	set_error_page(std::string, std::string);
		void	set_location(Location);
		void	set_location_open(int);
		void	set_server_open(int);
		//	get
		std::string					get_listen();
		std::string					get_host();
		std::string					get_root();
		std::string					get_client_max_body_size();
		std::map<std::string, std::string>	get_error_page();
		std::vector<std::string>	get_server_name();
		std::vector<Location>		get_location();
		int						get_location_open();
		int						get_server_open();

};
#endif