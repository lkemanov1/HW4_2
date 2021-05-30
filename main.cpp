#include <iostream>
#include "Document.hpp"
#include "Object.hpp"
#include "KeyValueDatabase.hpp"
int main()
{
	std::string info = "peter\ndasdja\nexe\nfirstline\nsecondline\nlastline\n";
	std::string info2 = "peter\ndasdja\nexe\na:2\nb:4\nc:17\nd:17\n";
	Document doc("name","location","extension");
	KeyValueDatabase kvd("name", "location", "extension");
	kvd.add_entry(std::make_pair("key", 5));
	kvd.add_entry(std::make_pair("key1", 6));
	kvd.add_entry(std::make_pair("key2", -8));
	kvd.add_entry(std::make_pair("key3", 13));
	doc.write_line("zdr");
	doc.write_line("ko pr");
	doc.write_line("n6 ti");
	doc.write_line("dsfhkhf");
	std::cout << doc.read_line(2) << std::endl;
	std::cout << doc.read_line(3) << std::endl;
	std::cout << doc.read_line(1) << std::endl;
	std::cout << doc.read_line(2) << std::endl;
	std::cout << doc.read_line() << std::endl;
	std::cout << doc.read_line() << std::endl;

	
	std::cout << doc.debug_print();
	std::cout << doc.get_fullpath();
	std::cout << kvd.debug_print();
	std::cout << kvd.get_value("key3") << std::endl;
	///std::cout << kvd.get_value("sdf") << std::endl;

	//std::cout << kvd.debug_print() << std::endl;
	//std::cout << kvd.to_string() << std::endl;
	///std::cout << doc.to_string() << std::endl;
	Comparable* r = new KeyValueDatabase("file1", "/tmp", "txt");


	delete r;
	return 0;
}