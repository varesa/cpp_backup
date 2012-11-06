//Library by Esa Varemo, to set console to UTF-8 mode.

#include <utf8>

#include <fcntl.h>
#include <io.h>
#include <iostream>

namespace ev {
	void utf8::use() {
		_setmode(_fileno(stdout), _O_U8TEXT);
		_setmode(_fileno(stdin), _O_U8TEXT);
	}
}