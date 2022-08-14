#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;
#pragma once


class word {
		public:
				word();
				word(const word &);
                word(char *);
				~word();
				 word & operator=(const word &);
                 void SetData(const char *);
		private:
				char * data;
				int count;
};
