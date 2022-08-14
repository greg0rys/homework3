// header file for words

#pragma once
#define MAX_CHARS 30

class word {
		public:
				word();
				word(const word &);
				~word();
				const word & operator=(const word &);
		private:
				char *name;
				int count = 0;
};
