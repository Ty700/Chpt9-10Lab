#ifndef ENCYCLOPEDIAH
#define ENCYCLOPEDIAH

#include <string>
#include "Book.h"

using namespace std;

class Encyclopedia : public Book {
   public:
      void SetEdition(string userEdition);
      string GetEdition();
      void SetNumPages(int userNumPages);
      int GetNumPages();
      void PrintInfo();
   private:
      string edition;
      int numPages;
};

#endif
