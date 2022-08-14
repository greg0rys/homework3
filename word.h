// header file for words

#pragma once
#define MAX_CHARS 30

class word {
		public:
				word();
				word(const word &);
				~word();
				 word & operator=(const word &);
		private:
				char *data;
				int count = 0;
};
