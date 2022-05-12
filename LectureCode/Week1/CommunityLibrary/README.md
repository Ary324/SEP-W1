# The Community Library
This example shows most of the principles of object oriented programming that we will learn in the first half of the course. The software to implement the community library represents a real-world situation that is implemented using object-oriented programming.

- A community library is described in `CommunityLibraryDescription.docx`. This is based on the lending policy of the [Toronto Public Library](https://www.torontopubliclibrary.ca/using-the-library/borrowing-materials/), with exceptions. This library has patrons (customers) who borrow its resources, which could be books, DVDs, musical instruments etc...
- A document which breaks down the components of the community library can be seen in the UML diagram CommunityLibraryUML.docx. This document shows the relationships between the library resource and its component parts (eBook, standard book, DVD, musical instruments) as well as the patron which can borrow up to 5 library resources at a time.
- The source code for the library resource can be found at LibraryResource.h and LibraryResource.cpp.
- The source code for the book can be found at Book.h and Book.cpp. The source code for the eBook and the standard paper book can be found at ElectronicBook.h and ElectronicBook.cpp, StandardPaperBook.h and StandardPaperBook.cpp.
- The source code for the DVD can be found at DVD.h and DVD.cpp.
- The source code for the musical instrument can be found at MusicalInstrument.h and MusicalInstrumentDVD.cpp.
- The source code for the patron (customer) can be found at Patron.h and Patron.cpp.
- The main function for the community library can be found at CommunityLibrary.cpp where two patrons are created, borrow library resources, then return them three days later. A report for each patron is generated and printed to the screen.

