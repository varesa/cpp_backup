#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <String>

#include "json_spirit.h"

using namespace std;
using namespace json_spirit;

struct thing {
    string name;
    int number;
};

void write_address( Array& a, const thing& addr ) {
    Object addr_obj;
    addr_obj.push_back( Pair( "name", addr.name) );
	addr_obj.push_back( Pair( "number",  addr.number) );
    a.push_back( addr_obj );
}

void write_addrs( const char* file_name, const thing things[] ) {
    Array addr_array;

    for( int i = 0; i < 1; ++i )
    {
		write_address( addr_array, things[i] );
    }

    ofstream os( file_name );
    write_formatted( addr_array, os );
    os.close();
}


thing read_thing( const Object& obj ) {
    thing addr;

    for( Object::size_type i = 0; i != obj.size(); ++i ) {
        const Pair& pair = obj[i];

        const string& name  = pair.name_;
        const Value&  value = pair.value_;

        if( name == "name" ) {
			addr.name = value.get_str();
        } else if( name == "number" ) {
			addr.number = value.get_int();
        } else {
			cout << "undefined field: " << name << endl;
        }
    }

    return addr;
}

vector< thing > read_addrs( string str ) {
    Value value;
    read( str, value );
	const Array& addr_array = value.get_array();
	vector< thing > addrs;

    for( unsigned int i = 0; i < addr_array.size(); ++i ) {
        addrs.push_back( read_thing( addr_array[i].get_obj() ) );
    }

    return addrs;
}

int main() {

	const thing things[1] = {{"textasudasirat",567}};
	const char* file_name( "textfile.txt" );

	vector< thing > thingsvect = read_addrs("[{\"name\" : \"testi\",\"number\" : 321}]");

	cout << thingsvect.at(0).name;

	while(true) {}
	return 0;
}